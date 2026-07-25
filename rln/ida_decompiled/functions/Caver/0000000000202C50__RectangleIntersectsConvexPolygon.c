/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202C50
 * Mangled: ._ZN5Caver32RectangleIntersectsConvexPolygonERKNS_9RectangleERKNS_7Vector2EffRKNS_7PolygonES5_ffPS3_Pf
 * Demangled: Caver::RectangleIntersectsConvexPolygon(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *
 * Callers: 1
 *   0x0000000000216ED0  std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<Caver::CollisionPair const,bool>>)
 *
 * Callees: 1
 *   0x00000000004AC394  Caver::RectangleIntersectsConvexPolygon(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202C58 string=0x0000000000202C5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RectangleIntersectsConvexPolygon(
        Caver *this,
        const Caver::Rectangle *a2,
        const Caver::Vector2 *a3,
        float a4,
        float a5,
        const Caver::Polygon *a6,
        const Caver::Vector2 *a7,
        float a8,
        float a9,
        Caver::Vector2 *a10,
        float *a11)
{
  return _ZN5Caver32RectangleIntersectsConvexPolygonERKNS_9RectangleERKNS_7Vector2EffRKNS_7PolygonES5_ffPS3_Pf(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}

