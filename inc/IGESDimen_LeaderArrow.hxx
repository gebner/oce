// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_LeaderArrow_HeaderFile
#define _IGESDimen_LeaderArrow_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESDimen_LeaderArrow.hxx>

#include <Standard_Real.hxx>
#include <gp_XY.hxx>
#include <Handle_TColgp_HArray1OfXY.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Standard_Integer.hxx>
class TColgp_HArray1OfXY;
class Standard_OutOfRange;
class gp_XY;
class gp_Pnt2d;
class gp_Pnt;


//! defines LeaderArrow, Type <214> Form <1-12>
//! in package IGESDimen
//! Consists of one or more line segments except when
//! leader is part of an angular dimension, with links to
//! presumed text item
class IGESDimen_LeaderArrow : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESDimen_LeaderArrow();
  
  //! This method is used to set the fields of the class
  //! LeaderArrow
  //! - height      : ArrowHead height
  //! - width       : ArrowHead width
  //! - depth       : Z Depth
  //! - position    : ArrowHead coordinates
  //! - segments    : Segment tail coordinate pairs
  Standard_EXPORT   void Init (const Standard_Real height, const Standard_Real width, const Standard_Real depth, const gp_XY& position, const Handle(TColgp_HArray1OfXY)& segments) ;
  
  //! Changes FormNumber (indicates the Shape of the Arrow)
  //! Error if not in range [0-12]
  Standard_EXPORT   void SetFormNumber (const Standard_Integer form) ;
  
  //! returns number of segments
  Standard_EXPORT   Standard_Integer NbSegments()  const;
  
  //! returns ArrowHead height
  Standard_EXPORT   Standard_Real ArrowHeadHeight()  const;
  
  //! returns ArrowHead width
  Standard_EXPORT   Standard_Real ArrowHeadWidth()  const;
  
  //! returns Z depth
  Standard_EXPORT   Standard_Real ZDepth()  const;
  
  //! returns ArrowHead co-ordinates
  Standard_EXPORT   gp_Pnt2d ArrowHead()  const;
  
  //! returns ArrowHead co-ordinates after Transformation
  Standard_EXPORT   gp_Pnt TransformedArrowHead()  const;
  
  //! returns segment tail co-ordinates.
  //! raises exception if Index <= 0 or Index > NbSegments
  Standard_EXPORT   gp_Pnt2d SegmentTail (const Standard_Integer Index)  const;
  
  //! returns segment tail co-ordinates after Transformation.
  //! raises exception if Index <= 0 or Index > NbSegments
  Standard_EXPORT   gp_Pnt TransformedSegmentTail (const Standard_Integer Index)  const;




  DEFINE_STANDARD_RTTI(IGESDimen_LeaderArrow)

protected:




private: 


  Standard_Real theArrowHeadHeight;
  Standard_Real theArrowHeadWidth;
  Standard_Real theZDepth;
  gp_XY theArrowHead;
  Handle(TColgp_HArray1OfXY) theSegmentTails;


};







#endif // _IGESDimen_LeaderArrow_HeaderFile
