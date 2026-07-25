/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000497FDC
 * Mangled: _ZN5Caver8GUILabel7AddTextERKSs
 * Demangled: Caver::GUILabel::AddText(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F5CC0  Caver::GUILabel::AddText(std::string const&)
 *
 * Callees: 3
 *   0x00000000001F5840  Caver::GUILabel::UpdateBounds(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9CD0  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *
 * Referenced strings: 32
 *   insn=0x0000000000497FEC string=0x0000000000497FF0 "V"
 *   insn=0x0000000000498000 string=0x0000000000498004 "h"
 *   insn=0x0000000000498004 string=0x0000000000498008 "iz@"
 *   insn=0x0000000000498008 string=0x000000000049800C "\n"
 *   insn=0x000000000049800C string=0x0000000000498010 "?"
 *   insn=0x0000000000498010 string=0x0000000000498014 " "
 *   insn=0x0000000000498014 string=0x0000000000498018 "j~@"
 *   insn=0x0000000000498014 string=0x0000000000498078 "h"
 *   insn=0x000000000049801C string=0x0000000000498020 "K"
 *   insn=0x0000000000498020 string=0x0000000000498024 "k"
 *   insn=0x0000000000498024 string=0x0000000000498028 "K"
 *   insn=0x000000000049802C string=0x0000000000498030 "\t)"
 *   insn=0x0000000000498030 string=0x0000000000498034 "5"
 *   insn=0x0000000000498038 string=0x000000000049803C ""
 *   insn=0x000000000049804C string=0x0000000000498050 "\t@"
 *   insn=0x0000000000498058 string=0x000000000049805C ""
 *   insn=0x000000000049806C string=0x0000000000498070 "@"
 *   insn=0x0000000000498078 string=0x000000000049807C "("
 *   insn=0x000000000049807C string=0x0000000000498080 "i"
 *   insn=0x000000000049807C string=0x00000000004980A0 "h"
 *   insn=0x0000000000498080 string=0x0000000000498084 "h"
 *   insn=0x0000000000498084 string=0x0000000000498088 ")"
 *   insn=0x000000000049808C string=0x0000000000498090 "\n"
 *   insn=0x0000000000498090 string=0x0000000000498094 "\t"
 *   insn=0x0000000000498094 string=0x0000000000498098 "i"
 *   insn=0x0000000000498098 string=0x000000000049809C "\t"
 *   insn=0x00000000004980A0 string=0x00000000004980A4 "`"
 *   insn=0x00000000004980A8 string=0x00000000004980AC "`"
 *   insn=0x00000000004980C8 string=0x00000000001F9CD0 "0'"
 *   insn=0x00000000004980D0 string=0x00000000001F5840 "P'"
 *   insn=0x00000000004980E0 string=0x00000000004980F8 "vx"
 *   insn=0x00000000004980F8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUILabel::AddText(__int64 a1)
{
  _QWORD *v2; // x8
  __int64 v3; // x9
  __int64 v4; // x10
  _QWORD *v5; // x21
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  int v9; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = *(_QWORD **)(a1 + 288);
  v3 = *(_QWORD *)(a1 + 240);
  if ( v3 != *v2 )
  {
    v4 = *(_QWORD *)(a1 + 248);
    if ( v4 )
      ++*(_QWORD *)(v4 + 8);
    v5 = (_QWORD *)v2[1];
    *v2 = v3;
    v2[1] = v4;
    if ( v5 )
    {
      v6 = v5[1] - 1LL;
      v5[1] = v6;
      if ( !v6 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v7 = v5[2] - 1LL;
        v5[2] = v7;
        if ( !v7 )
          (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
  }
  if ( *(_BYTE *)(a1 + 320) )
  {
    v8 = *(_QWORD *)(a1 + 288);
    v9 = *(_DWORD *)(a1 + 321);
    *(_BYTE *)(v8 + 40) = 1;
    *(_DWORD *)(v8 + 41) = v9;
    *(_QWORD *)(v8 + 48) = *(_QWORD *)(a1 + 328);
  }
  Caver::FontText::AddText();
  Caver::GUILabel::UpdateBounds((Caver::GUILabel *)a1);
}

