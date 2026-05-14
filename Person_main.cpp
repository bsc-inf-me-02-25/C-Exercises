int main() {
	Person Jane = Person("Jane", 60.0f);
	Person John = Person("Jane", 75.0f);
	
	float totalweight = Jane + John;
	cout << "Total weight: " << totalWeight << endl;
	
	return 0;
}