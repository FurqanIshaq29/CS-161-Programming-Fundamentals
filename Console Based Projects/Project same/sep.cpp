void sellerMenu3()
{
    for (int i = 0; i < numberOfProductsOrdered ; i++)
    {
        cout << "Order # " << i + 1 << " : \n";
        cout << "Brand Name : " << productBrand[placeOrderedindex] << endl;
        cout << "Product Name : " << productName[placeOrderedindex] << endl;
        cout << "Product Price : " << productPrice[placeOrderedindex] << endl;
        cout << "Product Category : " << productCategory[placeOrderedindex] << endl;
        cout << "Product Reviews : " << productReviews[placeOrderedindex] << "\n";
        cout << "Product Description : " << productDetails[placeOrderedindex] << "\n\n";
        cout << "Product Price : " << (productPrice[placeOrderedindex] + 150) << "\n";
        cout << "Enter the current **in Progress** : ";
        cin >> inProgress;
        cout << "Enter the current **Shipped** : ";
        cin >> shipped;
        cout << "Enter the current **Delivered** : ";
        cin >> delivered;
    }

    if (orderPlacement = 0)
    {
        cout << "You have not any Orders yet (^.^)\n";
    }
}