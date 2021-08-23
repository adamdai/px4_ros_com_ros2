# CMake generated Testfile for 
# Source directory: /home/navlab-tx2-4/px4_ros_com_ros2/src/px4_multi_agent_planning/multi_rtd_interfaces
# Build directory: /home/navlab-tx2-4/px4_ros_com_ros2/build/multi_rtd_interfaces
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/eloquent/share/ament_cmake_test/cmake/run_test.py" "/home/navlab-tx2-4/px4_ros_com_ros2/build/multi_rtd_interfaces/test_results/multi_rtd_interfaces/lint_cmake.xunit.xml" "--package-name" "multi_rtd_interfaces" "--output-file" "/home/navlab-tx2-4/px4_ros_com_ros2/build/multi_rtd_interfaces/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/eloquent/bin/ament_lint_cmake" "--xunit-file" "/home/navlab-tx2-4/px4_ros_com_ros2/build/multi_rtd_interfaces/test_results/multi_rtd_interfaces/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/navlab-tx2-4/px4_ros_com_ros2/src/px4_multi_agent_planning/multi_rtd_interfaces")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/eloquent/share/ament_cmake_test/cmake/run_test.py" "/home/navlab-tx2-4/px4_ros_com_ros2/build/multi_rtd_interfaces/test_results/multi_rtd_interfaces/xmllint.xunit.xml" "--package-name" "multi_rtd_interfaces" "--output-file" "/home/navlab-tx2-4/px4_ros_com_ros2/build/multi_rtd_interfaces/ament_xmllint/xmllint.txt" "--command" "/opt/ros/eloquent/bin/ament_xmllint" "--xunit-file" "/home/navlab-tx2-4/px4_ros_com_ros2/build/multi_rtd_interfaces/test_results/multi_rtd_interfaces/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/navlab-tx2-4/px4_ros_com_ros2/src/px4_multi_agent_planning/multi_rtd_interfaces")
subdirs("multi_rtd_interfaces__py")
