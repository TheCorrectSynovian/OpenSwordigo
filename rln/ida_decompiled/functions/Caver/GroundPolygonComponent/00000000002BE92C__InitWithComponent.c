/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BE92C
 * Mangled: _ZN5Caver22GroundPolygonComponent17InitWithComponentEPKS0_
 * Demangled: Caver::GroundPolygonComponent::InitWithComponent(Caver::GroundPolygonComponent const*)
 *
 * Callers: 1
 *   0x00000000001FBD40  Caver::GroundPolygonComponent::InitWithComponent(Caver::GroundPolygonComponent const*)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F73A0  Caver::Component::UpdateObjectBounds(void)
 *   0x0000000000200AA0  Caver::Polygon::Bounds(void)
 *   0x0000000000203DE0  std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::operator=(std::vector<Caver::Vector2,std::allocator<Caver::Vector2>> const&)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 39
 *   insn=0x00000000002BE93C string=0x00000000002BE940 "V"
 *   insn=0x00000000002BE958 string=0x00000000002BE95C "`"
 *   insn=0x00000000002BE95C string=0x00000000002BE960 "h""
 *   insn=0x00000000002BE960 string=0x00000000002BE964 "Q"
 *   insn=0x00000000002BE968 string=0x00000000002BE96C "`"
 *   insn=0x00000000002BE970 string=0x00000000002BE974 "u"
 *   insn=0x00000000002BE974 string=0x00000000002BE978 "hr"
 *   insn=0x00000000002BE984 string=0x00000000002BE988 "h""
 *   insn=0x00000000002BE98C string=0x00000000002BE990 "D"
 *   insn=0x00000000002BE998 string=0x00000000002BE99C "`"
 *   insn=0x00000000002BE9A0 string=0x00000000001F73A0 "0'"
 *   insn=0x00000000002BE9A4 string=0x00000000002BE9A8 "`"
 *   insn=0x00000000002BE9AC string=0x00000000002BE9B0 "h"
 *   insn=0x00000000002BE9B4 string=0x00000000002BE9B8 "hV"
 *   insn=0x00000000002BE9BC string=0x00000000002BE9C0 "h"
 *   insn=0x00000000002BE9C4 string=0x00000000002BE9C8 "h"
 *   insn=0x00000000002BE9C8 string=0x00000000002BE9CC "7"
 *   insn=0x00000000002BE9D4 string=0x00000000002BE9D8 "\n"
 *   insn=0x00000000002BE9D4 string=0x00000000002BE9E4 "uj@"
 *   insn=0x00000000002BE9D8 string=0x00000000002BE9DC "J"
 *   insn=0x00000000002BE9DC string=0x00000000002BE9E0 "\n"
 *   insn=0x00000000002BE9E4 string=0x00000000002BE9E8 "i"
 *   insn=0x00000000002BE9E8 string=0x00000000002BE9EC "5"
 *   insn=0x00000000002BE9F0 string=0x00000000002BE9F4 ""
 *   insn=0x00000000002BEA04 string=0x00000000002BEA08 "\t@"
 *   insn=0x00000000002BEA10 string=0x00000000002BEA14 ""
 *   insn=0x00000000002BEA24 string=0x00000000002BEA28 "@"
 *   insn=0x00000000002BEA34 string=0x00000000002BEA38 "\n"
 *   insn=0x00000000002BEA34 string=0x00000000002BEA44 "tr@"
 *   insn=0x00000000002BEA38 string=0x00000000002BEA3C "J"
 *   insn=0x00000000002BEA3C string=0x00000000002BEA40 "\n"
 *   insn=0x00000000002BEA44 string=0x00000000002BEA48 "i"
 *   insn=0x00000000002BEA48 string=0x00000000002BEA4C "4"
 *   insn=0x00000000002BEA50 string=0x00000000002BEA54 ""
 *   insn=0x00000000002BEA64 string=0x00000000002BEA68 "\t@"
 *   insn=0x00000000002BEA70 string=0x00000000002BEA74 ""
 *   insn=0x00000000002BEA84 string=0x00000000002BEA88 "@"
 *   insn=0x00000000002BEA9C string=0x00000000002BEAB4 ""
 *   insn=0x00000000002BEAB4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GroundPolygonComponent::InitWithComponent(
        Caver::GroundPolygonComponent *this,
        const Caver::GroundPolygonComponent *a2)
{
  __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x9
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x9
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8
  __int128 v15; // [xsp+8h] [xbp-38h] BYREF
  __int64 v16; // [xsp+18h] [xbp-28h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28);
  std::vector<Caver::Vector2>::operator=();
  *((_WORD *)this + 72) = *((_WORD *)a2 + 72);
  Caver::Polygon::Bounds((__int64 *)&v15, (Caver::GroundPolygonComponent *)((char *)this + 112));
  *(_OWORD *)((char *)this + 152) = v15;
  Caver::Component::UpdateObjectBounds(this);
  *((_BYTE *)this + 176) = *((_BYTE *)a2 + 176);
  *((_QWORD *)this + 21) = *((_QWORD *)a2 + 21);
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 45);
  *((_BYTE *)this + 184) = *((_BYTE *)a2 + 184);
  result = sub_56A6A8((char *)this + 192);
  v6 = *((_QWORD *)a2 + 25);
  v5 = *((_QWORD *)a2 + 26);
  if ( v5 )
    ++*(_QWORD *)(v5 + 8);
  v7 = (_QWORD *)*((_QWORD *)this + 26);
  *((_QWORD *)this + 25) = v6;
  *((_QWORD *)this + 26) = v5;
  if ( v7 )
  {
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  v11 = *((_QWORD *)a2 + 27);
  v10 = *((_QWORD *)a2 + 28);
  if ( v10 )
    ++*(_QWORD *)(v10 + 8);
  v12 = (_QWORD *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 27) = v11;
  *((_QWORD *)this + 28) = v10;
  if ( v12 )
  {
    v13 = v12[1] - 1LL;
    v12[1] = v13;
    if ( !v13 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v14 = v12[2] - 1LL;
      v12[2] = v14;
      if ( !v14 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
  return result;
}

