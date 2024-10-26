
# Inventory Management System 

## Project Description

This project is an **Inventory Management System** built in C++ using Object-Oriented Programming (OOP) principles. It allows users to manage products, including adding new items, updating existing inventory, deleting products, and viewing the list of all items. This system is designed to simulate basic operations needed in retail or warehouse management.

## Table of Contents
- [Features](#features)
- [How it Works](#how-it-works)
- [Class Structure](#class-structure)
- [Usage](#usage)
- [Future Enhancements](#future-enhancements)
- [Contributing](#contributing)


## Features

- **Add New Products**: Insert new products into the inventory with details like name, ID, quantity, and price.
- **Update Inventory**: Modify the quantity or price of existing products.
- **Delete Products**: Remove products from the inventory by product ID.
- **View Inventory**: Display the complete list of all products in the inventory.
- **Search Functionality**: Search for products by their ID or name.

## How it Works

1. **Add a Product**: Enter the product details such as ID, name, quantity, and price.
2. **Update a Product**: Select an item by its ID and update its quantity or price.
3. **Delete a Product**: Remove an item from the inventory by providing the product's ID.
4. **Display Inventory**: View all products currently stored in the inventory along with their details.
5. **Search Product**: Find products by ID or name and display their details.

## Class Structure

The project follows object-oriented principles using classes and objects. Here’s an overview of the main classes used:

### `Product`
- Represents an individual item in the inventory.
- Contains attributes:
  - `productID`: The unique identifier for the product.
  - `name`: The name of the product.
  - `quantity`: The number of units available.
  - `price`: The cost of the product.

- **Methods**:
  - Getters and setters for product attributes.
  - Display product details.

### `Inventory`
- Manages a collection of `Product` objects.
- **Attributes**:
  - A list or vector of `Product` objects.
  
- **Methods**:
  - `addProduct()`: Adds a new product to the inventory.
  - `updateProduct()`: Updates the details (quantity, price) of a product by ID.
  - `deleteProduct()`: Removes a product from the inventory by ID.
  - `displayInventory()`: Displays the details of all products in the inventory.
  - `searchProduct()`: Finds a product by ID or name.


## Usage

1. **Start the application** by running the compiled program.
2. **Menu-driven interface**: Use the menu to navigate between different operations:
   - Add new products.
   - Update or delete existing products.
   - View the inventory.
   - Search for specific products.

### Example:
```
Inventory Management System

1. Add Product
2. Update Product
3. Delete Product
4. Display Inventory
5. Search Product
6. Exit

Choose an option: 1

Enter product ID: 101
Enter product name: Laptop
Enter quantity: 50
Enter price: 799.99
Product added successfully!
```

## Future Enhancements

- **File Handling**: Add the ability to save and load inventory data from a file for persistent storage.
- **User Authentication**: Implement a login system to restrict access to inventory management.
- **Sorting and Filtering**: Add options to sort products by name, price, or quantity, and filter based on criteria like category or stock level.
- **Graphical User Interface (GUI)**: Replace the console-based UI with a graphical interface using libraries like **Qt** or **SFML**.

## Contributing

Contributions are welcome! Here's how you can contribute:

1. Fork the repository.
2. Create a new branch:
   ```bash
   git checkout -b feature-branch
   ```
3. Make your changes and commit:
   ```bash
   git commit -m "Add feature"
   ```
4. Push to the branch:
   ```bash
   git push origin feature-branch
   ```
