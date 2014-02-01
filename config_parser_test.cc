#include "gtest/gtest.h"
#include "config_parser.h"

TEST(NginxConfigParserTest, SimpleConfig) {
  NginxConfigParser parser;
  NginxConfig out_config;

  bool success = parser.Parse(
      "/home/foucher/cs3/nginx-configparser/simple_test.conf",
      &out_config);

  EXPECT_TRUE(success);
}

TEST(NginxConfigParserTest, ComplexConfig) {
  NginxConfigParser parser;
  NginxConfig out_config;

  bool success = parser.Parse(
      "/home/foucher/cs3/nginx-configparser/complex_test.conf",
      &out_config);

  EXPECT_TRUE(success);
}
