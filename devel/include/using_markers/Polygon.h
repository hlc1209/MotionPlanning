// Generated by gencpp from file using_markers/Polygon.msg
// DO NOT EDIT!


#ifndef USING_MARKERS_MESSAGE_POLYGON_H
#define USING_MARKERS_MESSAGE_POLYGON_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <using_markers/Point2D.h>

namespace using_markers
{
template <class ContainerAllocator>
struct Polygon_
{
  typedef Polygon_<ContainerAllocator> Type;

  Polygon_()
    : Polygon()  {
    }
  Polygon_(const ContainerAllocator& _alloc)
    : Polygon(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::using_markers::Point2D_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::using_markers::Point2D_<ContainerAllocator> >::other >  _Polygon_type;
  _Polygon_type Polygon;




  typedef boost::shared_ptr< ::using_markers::Polygon_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::using_markers::Polygon_<ContainerAllocator> const> ConstPtr;

}; // struct Polygon_

typedef ::using_markers::Polygon_<std::allocator<void> > Polygon;

typedef boost::shared_ptr< ::using_markers::Polygon > PolygonPtr;
typedef boost::shared_ptr< ::using_markers::Polygon const> PolygonConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::using_markers::Polygon_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::using_markers::Polygon_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace using_markers

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'using_markers': ['/home/wall-e/Terry_ws/src/haptic-shared-control/using_markers/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::using_markers::Polygon_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::using_markers::Polygon_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::using_markers::Polygon_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::using_markers::Polygon_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::using_markers::Polygon_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::using_markers::Polygon_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::using_markers::Polygon_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1808ec6af500892aa3059118b3e38f9f";
  }

  static const char* value(const ::using_markers::Polygon_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1808ec6af500892aULL;
  static const uint64_t static_value2 = 0xa3059118b3e38f9fULL;
};

template<class ContainerAllocator>
struct DataType< ::using_markers::Polygon_<ContainerAllocator> >
{
  static const char* value()
  {
    return "using_markers/Polygon";
  }

  static const char* value(const ::using_markers::Polygon_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::using_markers::Polygon_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Point2D[] Polygon\n\
\n\
================================================================================\n\
MSG: using_markers/Point2D\n\
# this is a msg about Point2D\n\
float64 x\n\
float64 y\n\
";
  }

  static const char* value(const ::using_markers::Polygon_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::using_markers::Polygon_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Polygon);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Polygon_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::using_markers::Polygon_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::using_markers::Polygon_<ContainerAllocator>& v)
  {
    s << indent << "Polygon[]" << std::endl;
    for (size_t i = 0; i < v.Polygon.size(); ++i)
    {
      s << indent << "  Polygon[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::using_markers::Point2D_<ContainerAllocator> >::stream(s, indent + "    ", v.Polygon[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // USING_MARKERS_MESSAGE_POLYGON_H
