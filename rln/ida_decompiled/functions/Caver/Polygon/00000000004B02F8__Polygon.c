/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B02F8
 * Mangled: _ZN5Caver7PolygonC2EiPKNS_7Vector2Eb
 * Demangled: Caver::Polygon::Polygon(int,Caver::Vector2 const*,bool)
 *
 * Callers: 1
 *   0x00000000001FE1E0  Caver::Polygon::Polygon(int,Caver::Vector2 const*,bool)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7DF0  std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Caver::Vector2*,std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>>,ulong,Caver::Vector2 const&)
 *   0x0000000000201760  .memcpy
 *   0x00000000004B03D4  Caver::Polygon::SetVertices(int,Caver::Vector2 const*)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x00000000004B030C string=0x00000000004B0310 "W"
 *   insn=0x00000000004B0324 string=0x00000000004B0328 "i"
 *   insn=0x00000000004B033C string=0x00000000004B0340 "i"
 *   insn=0x00000000004B0340 string=0x00000000004B0344 "5"
 *   insn=0x00000000004B0344 string=0x00000000004B0368 "4"
 *   insn=0x00000000004B0348 string=0x00000000004B034C "u"
 *   insn=0x00000000004B0364 string=0x00000000001F7DF0 "0'"
 *   insn=0x00000000004B0368 string=0x00000000004B036C "`"
 *   insn=0x00000000004B037C string=0x00000000004B0380 "h"
 *   insn=0x00000000004B0380 string=0x00000000004B0384 "\t"
 *   insn=0x00000000004B0384 string=0x00000000004B0388 "\ti5"
 *   insn=0x00000000004B03B4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004B03BC string=0x00000000004B03C0 "h"
 *   insn=0x00000000004B03C8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004B03CC string=0x00000000004B03D0 "=E"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Polygon::Polygon(__int64 this, int a2, const Caver::Vector2 *a3, char a4)
{
  __int64 v4; // x19
  size_t v7; // x21

  v4 = this;
  _ReadStatusReg(TPIDR_EL0);
  *(_DWORD *)this = 0;
  *(_QWORD *)(this + 8) = 0;
  *(_QWORD *)(this + 16) = 0;
  *(_QWORD *)(this + 24) = 0;
  *(_BYTE *)(this + 32) = 0;
  *(_BYTE *)(this + 33) = a4 & 1;
  if ( a2 )
  {
    *(_DWORD *)this = a2;
    if ( a2 != -1 )
      this = std::vector<Caver::Vector2>::_M_fill_insert();
  }
  if ( a3 )
  {
    v7 = 8LL * a2;
    this = (__int64)memcpy(*(void **)(v4 + 8), a3, v7);
    *(_QWORD *)(*(_QWORD *)(v4 + 8) + v7) = **(_QWORD **)(v4 + 8);
  }
  return this;
}

