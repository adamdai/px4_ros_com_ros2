# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/SensorGyroFft.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'peak_frequencies_x'
# Member 'peak_frequencies_y'
# Member 'peak_frequencies_z'
# Member 'peak_magnitude_x'
# Member 'peak_magnitude_y'
# Member 'peak_magnitude_z'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorGyroFft(type):
    """Metaclass of message 'SensorGyroFft'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('px4_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'px4_msgs.msg.SensorGyroFft')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_gyro_fft
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_gyro_fft
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_gyro_fft
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_gyro_fft
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_gyro_fft

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorGyroFft(metaclass=Metaclass_SensorGyroFft):
    """Message class 'SensorGyroFft'."""

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_device_id',
        '_sensor_sample_rate_hz',
        '_resolution_hz',
        '_peak_frequencies_x',
        '_peak_frequencies_y',
        '_peak_frequencies_z',
        '_peak_magnitude_x',
        '_peak_magnitude_y',
        '_peak_magnitude_z',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'device_id': 'uint32',
        'sensor_sample_rate_hz': 'float',
        'resolution_hz': 'float',
        'peak_frequencies_x': 'float[6]',
        'peak_frequencies_y': 'float[6]',
        'peak_frequencies_z': 'float[6]',
        'peak_magnitude_x': 'uint32[6]',
        'peak_magnitude_y': 'uint32[6]',
        'peak_magnitude_z': 'uint32[6]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 6),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.device_id = kwargs.get('device_id', int())
        self.sensor_sample_rate_hz = kwargs.get('sensor_sample_rate_hz', float())
        self.resolution_hz = kwargs.get('resolution_hz', float())
        if 'peak_frequencies_x' not in kwargs:
            self.peak_frequencies_x = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.peak_frequencies_x = numpy.array(kwargs.get('peak_frequencies_x'), dtype=numpy.float32)
            assert self.peak_frequencies_x.shape == (6, )
        if 'peak_frequencies_y' not in kwargs:
            self.peak_frequencies_y = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.peak_frequencies_y = numpy.array(kwargs.get('peak_frequencies_y'), dtype=numpy.float32)
            assert self.peak_frequencies_y.shape == (6, )
        if 'peak_frequencies_z' not in kwargs:
            self.peak_frequencies_z = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.peak_frequencies_z = numpy.array(kwargs.get('peak_frequencies_z'), dtype=numpy.float32)
            assert self.peak_frequencies_z.shape == (6, )
        if 'peak_magnitude_x' not in kwargs:
            self.peak_magnitude_x = numpy.zeros(6, dtype=numpy.uint32)
        else:
            self.peak_magnitude_x = numpy.array(kwargs.get('peak_magnitude_x'), dtype=numpy.uint32)
            assert self.peak_magnitude_x.shape == (6, )
        if 'peak_magnitude_y' not in kwargs:
            self.peak_magnitude_y = numpy.zeros(6, dtype=numpy.uint32)
        else:
            self.peak_magnitude_y = numpy.array(kwargs.get('peak_magnitude_y'), dtype=numpy.uint32)
            assert self.peak_magnitude_y.shape == (6, )
        if 'peak_magnitude_z' not in kwargs:
            self.peak_magnitude_z = numpy.zeros(6, dtype=numpy.uint32)
        else:
            self.peak_magnitude_z = numpy.array(kwargs.get('peak_magnitude_z'), dtype=numpy.uint32)
            assert self.peak_magnitude_z.shape == (6, )

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.timestamp_sample != other.timestamp_sample:
            return False
        if self.device_id != other.device_id:
            return False
        if self.sensor_sample_rate_hz != other.sensor_sample_rate_hz:
            return False
        if self.resolution_hz != other.resolution_hz:
            return False
        if all(self.peak_frequencies_x != other.peak_frequencies_x):
            return False
        if all(self.peak_frequencies_y != other.peak_frequencies_y):
            return False
        if all(self.peak_frequencies_z != other.peak_frequencies_z):
            return False
        if all(self.peak_magnitude_x != other.peak_magnitude_x):
            return False
        if all(self.peak_magnitude_y != other.peak_magnitude_y):
            return False
        if all(self.peak_magnitude_z != other.peak_magnitude_z):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @property
    def timestamp_sample(self):
        """Message field 'timestamp_sample'."""
        return self._timestamp_sample

    @timestamp_sample.setter
    def timestamp_sample(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_sample' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp_sample' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp_sample = value

    @property
    def device_id(self):
        """Message field 'device_id'."""
        return self._device_id

    @device_id.setter
    def device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'device_id' field must be an unsigned integer in [0, 4294967295]"
        self._device_id = value

    @property
    def sensor_sample_rate_hz(self):
        """Message field 'sensor_sample_rate_hz'."""
        return self._sensor_sample_rate_hz

    @sensor_sample_rate_hz.setter
    def sensor_sample_rate_hz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sensor_sample_rate_hz' field must be of type 'float'"
        self._sensor_sample_rate_hz = value

    @property
    def resolution_hz(self):
        """Message field 'resolution_hz'."""
        return self._resolution_hz

    @resolution_hz.setter
    def resolution_hz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'resolution_hz' field must be of type 'float'"
        self._resolution_hz = value

    @property
    def peak_frequencies_x(self):
        """Message field 'peak_frequencies_x'."""
        return self._peak_frequencies_x

    @peak_frequencies_x.setter
    def peak_frequencies_x(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'peak_frequencies_x' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'peak_frequencies_x' numpy.ndarray() must have a size of 6"
            self._peak_frequencies_x = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'peak_frequencies_x' field must be a set or sequence with length 6 and each value of type 'float'"
        self._peak_frequencies_x = numpy.array(value, dtype=numpy.float32)

    @property
    def peak_frequencies_y(self):
        """Message field 'peak_frequencies_y'."""
        return self._peak_frequencies_y

    @peak_frequencies_y.setter
    def peak_frequencies_y(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'peak_frequencies_y' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'peak_frequencies_y' numpy.ndarray() must have a size of 6"
            self._peak_frequencies_y = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'peak_frequencies_y' field must be a set or sequence with length 6 and each value of type 'float'"
        self._peak_frequencies_y = numpy.array(value, dtype=numpy.float32)

    @property
    def peak_frequencies_z(self):
        """Message field 'peak_frequencies_z'."""
        return self._peak_frequencies_z

    @peak_frequencies_z.setter
    def peak_frequencies_z(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'peak_frequencies_z' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'peak_frequencies_z' numpy.ndarray() must have a size of 6"
            self._peak_frequencies_z = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'peak_frequencies_z' field must be a set or sequence with length 6 and each value of type 'float'"
        self._peak_frequencies_z = numpy.array(value, dtype=numpy.float32)

    @property
    def peak_magnitude_x(self):
        """Message field 'peak_magnitude_x'."""
        return self._peak_magnitude_x

    @peak_magnitude_x.setter
    def peak_magnitude_x(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'peak_magnitude_x' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 6, \
                "The 'peak_magnitude_x' numpy.ndarray() must have a size of 6"
            self._peak_magnitude_x = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'peak_magnitude_x' field must be a set or sequence with length 6 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._peak_magnitude_x = numpy.array(value, dtype=numpy.uint32)

    @property
    def peak_magnitude_y(self):
        """Message field 'peak_magnitude_y'."""
        return self._peak_magnitude_y

    @peak_magnitude_y.setter
    def peak_magnitude_y(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'peak_magnitude_y' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 6, \
                "The 'peak_magnitude_y' numpy.ndarray() must have a size of 6"
            self._peak_magnitude_y = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'peak_magnitude_y' field must be a set or sequence with length 6 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._peak_magnitude_y = numpy.array(value, dtype=numpy.uint32)

    @property
    def peak_magnitude_z(self):
        """Message field 'peak_magnitude_z'."""
        return self._peak_magnitude_z

    @peak_magnitude_z.setter
    def peak_magnitude_z(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'peak_magnitude_z' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 6, \
                "The 'peak_magnitude_z' numpy.ndarray() must have a size of 6"
            self._peak_magnitude_z = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'peak_magnitude_z' field must be a set or sequence with length 6 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._peak_magnitude_z = numpy.array(value, dtype=numpy.uint32)
