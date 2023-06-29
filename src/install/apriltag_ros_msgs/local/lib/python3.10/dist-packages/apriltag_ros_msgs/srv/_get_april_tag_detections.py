# generated from rosidl_generator_py/resource/_idl.py.em
# with input from apriltag_ros_msgs:srv/GetAprilTagDetections.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetAprilTagDetections_Request(type):
    """Metaclass of message 'GetAprilTagDetections_Request'."""

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
            module = import_type_support('apriltag_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'apriltag_ros_msgs.srv.GetAprilTagDetections_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_april_tag_detections__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_april_tag_detections__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_april_tag_detections__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_april_tag_detections__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_april_tag_detections__request

            from sensor_msgs.msg import CameraInfo
            if CameraInfo.__class__._TYPE_SUPPORT is None:
                CameraInfo.__class__.__import_type_support__()

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetAprilTagDetections_Request(metaclass=Metaclass_GetAprilTagDetections_Request):
    """Message class 'GetAprilTagDetections_Request'."""

    __slots__ = [
        '_camera_info',
        '_image',
        '_apriltag_size',
    ]

    _fields_and_field_types = {
        'camera_info': 'sensor_msgs/CameraInfo',
        'image': 'sensor_msgs/Image',
        'apriltag_size': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'CameraInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import CameraInfo
        self.camera_info = kwargs.get('camera_info', CameraInfo())
        from sensor_msgs.msg import Image
        self.image = kwargs.get('image', Image())
        self.apriltag_size = kwargs.get('apriltag_size', float())

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
        if self.camera_info != other.camera_info:
            return False
        if self.image != other.image:
            return False
        if self.apriltag_size != other.apriltag_size:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def camera_info(self):
        """Message field 'camera_info'."""
        return self._camera_info

    @camera_info.setter
    def camera_info(self, value):
        if __debug__:
            from sensor_msgs.msg import CameraInfo
            assert \
                isinstance(value, CameraInfo), \
                "The 'camera_info' field must be a sub message of type 'CameraInfo'"
        self._camera_info = value

    @builtins.property
    def image(self):
        """Message field 'image'."""
        return self._image

    @image.setter
    def image(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'image' field must be a sub message of type 'Image'"
        self._image = value

    @builtins.property
    def apriltag_size(self):
        """Message field 'apriltag_size'."""
        return self._apriltag_size

    @apriltag_size.setter
    def apriltag_size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'apriltag_size' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'apriltag_size' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._apriltag_size = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetAprilTagDetections_Response(type):
    """Metaclass of message 'GetAprilTagDetections_Response'."""

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
            module = import_type_support('apriltag_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'apriltag_ros_msgs.srv.GetAprilTagDetections_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_april_tag_detections__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_april_tag_detections__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_april_tag_detections__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_april_tag_detections__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_april_tag_detections__response

            from apriltag_ros_msgs.msg import Detection
            if Detection.__class__._TYPE_SUPPORT is None:
                Detection.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetAprilTagDetections_Response(metaclass=Metaclass_GetAprilTagDetections_Response):
    """Message class 'GetAprilTagDetections_Response'."""

    __slots__ = [
        '_detections',
    ]

    _fields_and_field_types = {
        'detections': 'sequence<apriltag_ros_msgs/Detection>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['apriltag_ros_msgs', 'msg'], 'Detection')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.detections = kwargs.get('detections', [])

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
        if self.detections != other.detections:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def detections(self):
        """Message field 'detections'."""
        return self._detections

    @detections.setter
    def detections(self, value):
        if __debug__:
            from apriltag_ros_msgs.msg import Detection
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
                 all(isinstance(v, Detection) for v in value) and
                 True), \
                "The 'detections' field must be a set or sequence and each value of type 'Detection'"
        self._detections = value


class Metaclass_GetAprilTagDetections(type):
    """Metaclass of service 'GetAprilTagDetections'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('apriltag_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'apriltag_ros_msgs.srv.GetAprilTagDetections')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_april_tag_detections

            from apriltag_ros_msgs.srv import _get_april_tag_detections
            if _get_april_tag_detections.Metaclass_GetAprilTagDetections_Request._TYPE_SUPPORT is None:
                _get_april_tag_detections.Metaclass_GetAprilTagDetections_Request.__import_type_support__()
            if _get_april_tag_detections.Metaclass_GetAprilTagDetections_Response._TYPE_SUPPORT is None:
                _get_april_tag_detections.Metaclass_GetAprilTagDetections_Response.__import_type_support__()


class GetAprilTagDetections(metaclass=Metaclass_GetAprilTagDetections):
    from apriltag_ros_msgs.srv._get_april_tag_detections import GetAprilTagDetections_Request as Request
    from apriltag_ros_msgs.srv._get_april_tag_detections import GetAprilTagDetections_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
