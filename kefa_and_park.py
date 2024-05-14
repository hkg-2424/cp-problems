import matplotlib.pyplot as plt

def plot_tree(node_colors, connections):
  """
  Plots a tree structure with colored nodes.

  Args:
      node_colors: A list of colors (strings) corresponding to each node (0-based indexing).
      connections: A list of tuples representing connections between nodes (parent, child using 0-based indexing).
  """
  # Check for invalid connections
  max_node_index = len(node_colors) - 1
  for parent, child in connections:
    if parent > max_node_index or child > max_node_index:
      raise ValueError(f"Invalid connection: Parent node {parent} or child node {child} is out of range (maximum node index is {max_node_index})")

  # Create a dictionary to store node positions
  node_positions = {}
  level = 0
  x = 0
  y = 0
  queue = [(0, 0, 0)]  # (node index, parent, level)

  while queue:
    node, parent, level = queue.pop(0)
    node_positions[node] = (x, y)
    y -= 20  # Adjust spacing based on desired layout

    # Add child nodes to the queue
    for child in connections[node]:
      queue.append((child, node, level + 1))
      x += 50  # Adjust spacing based on desired layout

  # Plot nodes
  for node, (x, y) in node_positions.items():
    color = node_colors[node]
    plt.plot(x, y, 'o', markersize=15, markerfacecolor=color, markeredgewidth=2, markeredgecolor='black')
    plt.text(x, y + 5, str(node + 1), ha='center', va='center', fontsize=12)  # Adjust node label for 1-based display

  # Plot edges
  for parent, child in connections:
    x1, y1 = node_positions[parent]
    x2, y2 = node_positions[child]
    plt.plot([x1, x2], [y1, y2], 'b-', alpha=0.7)

  # Set axis limits for better visualization
  plt.xlim(min(x for x, _ in node_positions.values()) - 20, max(x for x, _ in node_positions.values()) + 20)
  plt.ylim(min(y for _, y in node_positions.values()) - 20, max(y for _, y in node_positions.values()) + 20)
  plt.axis('off')  # Hide axes for cleaner presentation
  plt.show()

# Your data
node_colors = ["red" if color else "white" for color in [1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0]]
connections = [
  (6, 7),
  (12, 1),  # This connection will be handled by the error check (out of range)
  (9, 7),
  (1, 4),
  (10, 7),
  (7, 1),
  (11, 8),
  (5, 1),
  (3, 7),
  (5, 8),
  (4, 2)
]

try:
  plot_tree(node_colors, connections)
except ValueError as e:
  print("Error:", e)
