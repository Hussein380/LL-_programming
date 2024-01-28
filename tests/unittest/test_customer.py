import unittest
from customer import Customer

class TestCustomer(unittest.TestCase):
    """
    TestCustomer: This class inherits from unittest.TestCase,
    which provides a base class for test cases.
    """

    def setUp(self):
        self.customer_1 = Customer('john', 'Brad', 5000)
        self.customer_2 = Customer('Husseni', 'Garas', 3000)

    def test_customer_mail(self):
        self.assertEqual(self.customer_1.customer_mail, 'john.Brad@email.com')
        self.assertEqual(self.customer_2.customer_mail, 'Husseni.Garas@email.com')

    def test_apply_discount(self):
        self.customer_1.apply_discount()
        self.customer_2.apply_discount()

        self.assertEqual(self.customer_1.purchase, 4750)
        self.assertEqual(self.customer_2.purchase, 2850)

if __name__ == "__main__":
    unittest.main()
