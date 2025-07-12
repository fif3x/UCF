#include <iostream>
#include <vector>

#include "preferences.h"

#include "shapes/pyramid.hpp"
#include "shapes/cone.hpp"
#include "shapes/sphere.hpp"
#include "shapes/triangle.hpp"
#include "shapes/circle.hpp"
#include "shapes/cube.hpp"
#include "shapes/cylinder.hpp"

#include "calchelpers.h"

#include "results.hpp"

int main() {

	pref prefs;

	while (!shouldClose) {
		std::cout << "Input an operator (+ - * / ^), a shape to calculate its volume, 'exit' to exit program or 'res' to see previous results: ";
		std::cin >> op;
		if (op == "exit") {
			shouldClose = true;
			std::cout << "Exiting..." << std::endl;
			break;
		}
		else if (op == "+") {
			std::cout << "Number #1: "; std::cin >> a;
			std::cout << "Number #2: "; std::cin >> b;
			std::cout << "Result: " << a + b << std::endl;
			results.push_back(a + b);
		}
		else if (op == "-") {
			std::cout << "Number #1: "; std::cin >> a;
			std::cout << "Number #2: "; std::cin >> b;
			std::cout << "Result: " << a - b << std::endl;
			results.push_back(a - b);
		}
		else if (op == "*") {
			std::cout << "Number #1: "; std::cin >> a;
			std::cout << "Number #2: "; std::cin >> b;
			std::cout << "Result: " << a * b << std::endl;
			results.push_back(a * b);
		}
		else if (op == "/") {
			std::cout << "Number #1: "; std::cin >> a;
			std::cout << "Number #2: "; std::cin >> b;
			std::cout << "Result: " << a / b << std::endl;
			results.push_back(a / b);
		}
		else if (op == "^") {
			std::cout << "Number #1: "; std::cin >> a;
			std::cout << "Number #2: "; std::cin >> b;
			std::cout << "Result: " << pwr(a, b) << std::endl;
			results.push_back(pwr(a, b));
		}
		else if (op == "cone") {
			cone::calcV();
		}
		else if (op == "pyramid") {
			pyramid::calcV();
		}
		else if (op == "sphere") {
			sphere::calcV();
		}
		else if (op == "triangle") {
			triangle::calcArea();
		}
		else if (op == "circle") {
			circle::calcArea();
		}
		else if (op == "cube") {
			cube::calcV();
		}
		else if (op == "cylinder") {
			cylinder::calcV();
		}
		else if (op.empty()) {

		}
		else if (op == "res") {
			if (results.empty()) {
				std::cout << "No results yet." << std::endl;
			}
			else {
				std::cout << "Previous results: ";
				for (const auto& res : results) {
					std::cout << res << " ";
				}
				std::cout << std::endl;
			}
		}
		else {
			std::cout << "Incorect operator or shape" << std::endl;
		}
		std::cout << "[------------------------------]\n";
		std::cout << "\n";
		std::cout << "[------------------------------]\n";

	}

	return 0;
}