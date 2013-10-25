#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Problema
#include <boost/test/unit_test.hpp>

#include "../problema.h"

//char java0[] = "";
char java1[] = "public interface Dave {}";
char java2[] = "//public interface Dave {}dssd";

BOOST_AUTO_TEST_SUITE(PrimeirosTestes)

BOOST_AUTO_TEST_CASE(primeiroTeste) {
	BOOST_CHECK_EQUAL(contaLinhasCodigo("test/java0.java"), 0);
	BOOST_CHECK_EQUAL(contaLinhasCodigo("test/java3.java"), 1);
	BOOST_CHECK_EQUAL(contaLinhasCodigo("test/java4.java"), 0);
	BOOST_CHECK_EQUAL(contaLinhasCodigo("test/java5.java"), 2);
	BOOST_CHECK_EQUAL(contaLinhasCodigo("test/java2.java"), 5);
}

BOOST_AUTO_TEST_SUITE_END()
