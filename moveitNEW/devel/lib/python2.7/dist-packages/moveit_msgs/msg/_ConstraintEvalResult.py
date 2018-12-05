"""autogenerated by genpy from moveit_msgs/ConstraintEvalResult.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ConstraintEvalResult(genpy.Message):
  _md5sum = "093643083d24f6488cb5a868bd47c090"
  _type = "moveit_msgs/ConstraintEvalResult"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# This message contains result from constraint evaluation
# result specifies the result of constraint evaluation 
# (true indicates state satisfies constraint, false indicates state violates constraint)
# if false, distance specifies a measure of the distance of the state from the constraint
# if true, distance is set to zero
bool result
float64 distance

"""
  __slots__ = ['result','distance']
  _slot_types = ['bool','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       result,distance

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ConstraintEvalResult, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.result is None:
        self.result = False
      if self.distance is None:
        self.distance = 0.
    else:
      self.result = False
      self.distance = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_Bd.pack(_x.result, _x.distance))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 9
      (_x.result, _x.distance,) = _struct_Bd.unpack(str[start:end])
      self.result = bool(self.result)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_Bd.pack(_x.result, _x.distance))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 9
      (_x.result, _x.distance,) = _struct_Bd.unpack(str[start:end])
      self.result = bool(self.result)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_Bd = struct.Struct("<Bd")
