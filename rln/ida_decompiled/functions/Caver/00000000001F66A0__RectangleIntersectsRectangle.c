/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F66A0
 * Mangled: ._ZN5Caver28RectangleIntersectsRectangleERKNS_9RectangleERKNS_7Vector2EffS2_S5_ffPS3_PfS5_
 * Demangled: Caver::RectangleIntersectsRectangle(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *,Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x0000000000216ED0  std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<Caver::CollisionPair const,bool>>)
 *
 * Callees: 1
 *   0x00000000004ACA14  Caver::RectangleIntersectsRectangle(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *,Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F66A8 string=0x00000000001F66AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RectangleIntersectsRectangle(
        Caver *this,
        const Caver::Rectangle *a2,
        const Caver::Vector2 *a3,
        float a4,
        float a5,
        const Caver::Rectangle *a6,
        const Caver::Vector2 *a7,
        float a8,
        float a9,
        Caver::Vector2 *a10,
        float *a11,
        const Caver::Vector2 *a12)
{
  return _ZN5Caver28RectangleIntersectsRectangleERKNS_9RectangleERKNS_7Vector2EffS2_S5_ffPS3_PfS5_(
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
           a11,
           a12);
}

