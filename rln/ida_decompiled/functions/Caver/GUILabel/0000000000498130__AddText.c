/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000498130
 * Mangled: _ZN5Caver8GUILabel7AddTextERKSsRKN5boost10shared_ptrINS_13GradientColorEEE
 * Demangled: Caver::GUILabel::AddText(std::string const&,boost::shared_ptr<Caver::GradientColor> const&)
 *
 * Callers: 1
 *   0x00000000001FF000  Caver::GUILabel::AddText(std::string const&,boost::shared_ptr<Caver::GradientColor> const&)
 *
 * Callees: 1
 *   0x00000000001F5CC0  Caver::GUILabel::AddText(std::string const&)
 *
 * Referenced strings: 13
 *   insn=0x0000000000498140 string=0x0000000000498144 "H$@"
 *   insn=0x0000000000498144 string=0x0000000000498148 "j"
 *   insn=0x0000000000498150 string=0x0000000000498154 "+"
 *   insn=0x0000000000498150 string=0x0000000000498160 "U"
 *   insn=0x0000000000498154 string=0x0000000000498158 "k"
 *   insn=0x0000000000498158 string=0x000000000049815C "+"
 *   insn=0x0000000000498160 string=0x0000000000498164 "H"
 *   insn=0x0000000000498164 string=0x0000000000498168 "5"
 *   insn=0x000000000049816C string=0x0000000000498170 ""
 *   insn=0x0000000000498180 string=0x0000000000498184 "\t@"
 *   insn=0x000000000049818C string=0x0000000000498190 ""
 *   insn=0x00000000004981A0 string=0x00000000004981A4 "@"
 *   insn=0x00000000004981C0 string=0x00000000001F5CC0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUILabel::AddText(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x10
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x8

  v3 = *a3;
  v4 = a3[1];
  v5 = *(_QWORD *)(a1 + 288);
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  v6 = *(_QWORD **)(v5 + 32);
  *(_QWORD *)(v5 + 24) = v3;
  *(_QWORD *)(v5 + 32) = v4;
  if ( v6 )
  {
    v7 = v6[1] - 1LL;
    v6[1] = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  return Caver::GUILabel::AddText();
}

