/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000473948
 * Mangled: _ZN5Caver11SceneObject12setLocalAABBERKNS_9RectangleE
 * Demangled: Caver::SceneObject::setLocalAABB(Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x00000000001F5430  Caver::SceneObject::setLocalAABB(Caver::Rectangle const&)
 *
 * Callees: 7
 *   0x00000000001F4630  Caver::Scene::RegisterObjectForWorldBoundsUpdate(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001F5430  Caver::SceneObject::setLocalAABB(Caver::Rectangle const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6E00  Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle const&)
 *   0x00000000001FDDA0  Caver::Rectangle::RectangleInside(Caver::Rectangle const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 54
 *   insn=0x0000000000473954 string=0x0000000000473958 "T"
 *   insn=0x0000000000473968 string=0x000000000047396C "!"
 *   insn=0x0000000000473974 string=0x0000000000473978 " "
 *   insn=0x0000000000473978 string=0x000000000047397C "!8""
 *   insn=0x000000000047397C string=0x0000000000473980 "!"
 *   insn=0x0000000000473980 string=0x0000000000473984 "   "
 *   insn=0x0000000000473984 string=0x0000000000473988 "h"
 *   insn=0x0000000000473988 string=0x000000000047398C "a"
 *   insn=0x0000000000473988 string=0x00000000004739D4 " "
 *   insn=0x000000000047398C string=0x0000000000473990 """
 *   insn=0x0000000000473990 string=0x0000000000473994 "A8!"
 *   insn=0x0000000000473994 string=0x0000000000473998 "!"
 *   insn=0x0000000000473998 string=0x000000000047399C "   "
 *   insn=0x00000000004739A0 string=0x00000000004739A4 "!@"
 *   insn=0x00000000004739A4 string=0x00000000004739A8 "b"
 *   insn=0x00000000004739A8 string=0x00000000004739AC "!8""
 *   insn=0x00000000004739AC string=0x00000000004739B0 "!"
 *   insn=0x00000000004739B0 string=0x00000000004739B4 "   "
 *   insn=0x00000000004739B8 string=0x00000000004739BC "a"
 *   insn=0x00000000004739BC string=0x00000000004739C0 """
 *   insn=0x00000000004739C0 string=0x00000000004739C4 "A8!"
 *   insn=0x00000000004739C4 string=0x00000000004739C8 "!"
 *   insn=0x00000000004739C8 string=0x00000000004739CC "   "
 *   insn=0x00000000004739CC string=0x00000000004739D0 "\t"
 *   insn=0x00000000004739D8 string=0x00000000004739DC "h"
 *   insn=0x00000000004739E0 string=0x00000000004739E4 "`"
 *   insn=0x00000000004739EC string=0x00000000004739F0 "h\n@"
 *   insn=0x00000000004739F0 string=0x00000000004739F4 ""
 *   insn=0x00000000004739F4 string=0x00000000004739F8 "h\n"
 *   insn=0x0000000000473A00 string=0x00000000001F4630 "P'"
 *   insn=0x0000000000473A08 string=0x0000000000473A0C "@"
 *   insn=0x0000000000473A0C string=0x0000000000473A10 ""
 *   insn=0x0000000000473A10 string=0x0000000000473A14 ""
 *   insn=0x0000000000473A18 string=0x0000000000473A1C ""
 *   insn=0x0000000000473A1C string=0x0000000000473A20 ""
 *   insn=0x0000000000473A28 string=0x0000000000473A2C "h"
 *   insn=0x0000000000473A3C string=0x0000000000473A50 " \n"
 *   insn=0x0000000000473A50 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000473A58 string=0x0000000000473A5C "("
 *   insn=0x0000000000473A5C string=0x0000000000473A60 "\t\t@"
 *   insn=0x0000000000473A60 string=0x0000000000473A64 ")"
 *   insn=0x0000000000473A64 string=0x0000000000473A68 "\t\t"
 *   insn=0x0000000000473A6C string=0x0000000000473A70 "\t"
 *   insn=0x0000000000473A70 string=0x0000000000473A74 ")"
 *   insn=0x0000000000473A78 string=0x0000000000473A7C " "
 *   insn=0x0000000000473A84 string=0x0000000000473A88 "1j"
 *   insn=0x0000000000473A9C string=0x0000000000473AA0 "U"
 *   insn=0x0000000000473AA8 string=0x0000000000473AAC "`R"
 *   insn=0x0000000000473AB8 string=0x0000000000473ABC " "
 *   insn=0x0000000000473AB8 string=0x00000000001FDDA0 "0'"
 *   insn=0x0000000000473ABC string=0x0000000000473AC0 "`B"
 *   insn=0x0000000000473AD0 string=0x00000000001F6E00 "0'"
 *   insn=0x0000000000473AD8 string=0x0000000000473ADC "U"
 *   insn=0x0000000000473ADC string=0x00000000001F5430 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::setLocalAABB(__int64 this, const Caver::Rectangle *a2)
{
  __int64 v2; // x19
  int v3; // w8

  v2 = this;
  _ReadStatusReg(TPIDR_EL0);
  if ( fabsf(*(float *)a2 - *(float *)(this + 148)) > 0.0001
    || fabsf(*((float *)a2 + 1) - *(float *)(this + 152)) > 0.0001
    || fabsf(*((float *)a2 + 2) - *(float *)(this + 156)) > 0.0001
    || fabsf(*((float *)a2 + 3) - *(float *)(this + 160)) > 0.0001 )
  {
    *(_OWORD *)(this + 148) = *(_OWORD *)a2;
    if ( !*(_BYTE *)(this + 180) )
    {
      this = *(_QWORD *)(this + 32);
      if ( this )
      {
        ++*(_DWORD *)(v2 + 8);
        Caver::Scene::RegisterObjectForWorldBoundsUpdate();
        this = v2;
        if ( v2 )
        {
          v3 = *(_DWORD *)(v2 + 8) - 1;
          *(_DWORD *)(v2 + 8) = v3;
          if ( !v3 )
            this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
        }
      }
      *(_BYTE *)(v2 + 180) = 1;
    }
  }
  return this;
}

