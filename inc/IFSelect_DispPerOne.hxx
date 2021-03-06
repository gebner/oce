// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_DispPerOne_HeaderFile
#define _IFSelect_DispPerOne_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IFSelect_DispPerOne.hxx>

#include <IFSelect_Dispatch.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
class TCollection_AsciiString;
class Interface_Graph;
class IFGraph_SubPartsIterator;


//! A DispPerOne gathers all the input Entities into as many
//! Packets as there Root Entities from the Final Selection,
//! that is, one Packet per Entity
class IFSelect_DispPerOne : public IFSelect_Dispatch
{

public:

  
  //! Creates a DispPerOne
  Standard_EXPORT IFSelect_DispPerOne();
  
  //! Returns as Label, "One File per Input Entity"
  Standard_EXPORT   TCollection_AsciiString Label()  const;
  
  //! Returns True, maximum limit is given as <nbent>
  Standard_EXPORT virtual   Standard_Boolean LimitedMax (const Standard_Integer nbent, Standard_Integer& max)  const;
  
  //! Returns True (count is easy to know) and count is the length
  //! of the input list (RootResult from FinalSelection)
  Standard_EXPORT virtual   Standard_Integer PacketsCount (const Interface_Graph& G, Standard_Integer& count)  const;
  
  //! Returns the list of produced Packets. It defines one Packet
  //! per Entity given by RootResult from the Final Selection.
  Standard_EXPORT   void Packets (const Interface_Graph& G, IFGraph_SubPartsIterator& packs)  const;




  DEFINE_STANDARD_RTTI(IFSelect_DispPerOne)

protected:




private: 




};







#endif // _IFSelect_DispPerOne_HeaderFile
