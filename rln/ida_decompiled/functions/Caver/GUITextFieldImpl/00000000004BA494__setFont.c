/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA494
 * Mangled: _ZN5Caver16GUITextFieldImpl7setFontERKN5boost10shared_ptrINS_4FontEEE
 * Demangled: Caver::GUITextFieldImpl::setFont(boost::shared_ptr<Caver::Font> const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *
 * Referenced strings: 27
 *   insn=0x00000000004BA49C string=0x00000000004BA4A0 ") @"
 *   insn=0x00000000004BA4A8 string=0x00000000004BA4AC "\n"
 *   insn=0x00000000004BA4AC string=0x00000000004BA4B0 "J"
 *   insn=0x00000000004BA4B0 string=0x00000000004BA4B4 "\n"
 *   insn=0x00000000004BA4BC string=0x00000000004BA4C0 "3"
 *   insn=0x00000000004BA4C0 string=0x00000000004BA4C4 "h"
 *   insn=0x00000000004BA4C4 string=0x00000000004BA4C8 ""
 *   insn=0x00000000004BA4C8 string=0x00000000004BA4CC "h"
 *   insn=0x00000000004BA4D0 string=0x00000000004BA4D4 "h"
 *   insn=0x00000000004BA4D8 string=0x00000000004BA4DC "\t@"
 *   insn=0x00000000004BA4E0 string=0x00000000004BA4E4 "h\n@"
 *   insn=0x00000000004BA4E4 string=0x00000000004BA4E8 ""
 *   insn=0x00000000004BA4E8 string=0x00000000004BA4EC "h\n"
 *   insn=0x00000000004BA4F0 string=0x00000000004BA4F4 "h"
 *   insn=0x00000000004BA4F8 string=0x00000000004BA4FC "@"
 *   insn=0x00000000004BA508 string=0x00000000004BA50C "iz@"
 *   insn=0x00000000004BA51C string=0x00000000004BA520 "*"
 *   insn=0x00000000004BA51C string=0x00000000004BA52C "t~@"
 *   insn=0x00000000004BA520 string=0x00000000004BA524 "J"
 *   insn=0x00000000004BA524 string=0x00000000004BA528 "*"
 *   insn=0x00000000004BA52C string=0x00000000004BA530 "h&"
 *   insn=0x00000000004BA530 string=0x00000000004BA534 "4"
 *   insn=0x00000000004BA538 string=0x00000000004BA53C ""
 *   insn=0x00000000004BA54C string=0x00000000004BA550 "\t@"
 *   insn=0x00000000004BA558 string=0x00000000004BA55C ""
 *   insn=0x00000000004BA56C string=0x00000000004BA570 "@"
 *   insn=0x00000000004BA584 string=0x00000000001F8510 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextFieldImpl::setFont(__int64 result, __int64 *a2)
{
  __int64 v2; // x8
  __int64 v3; // x9
  _QWORD *v4; // x20
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x8
  Caver::GUILabel *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x9
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8

  v3 = *a2;
  v2 = a2[1];
  v4 = (_QWORD *)result;
  if ( v2 )
    ++*(_QWORD *)(v2 + 8);
  v5 = *(_QWORD **)(result + 352);
  *(_QWORD *)(result + 344) = v3;
  *(_QWORD *)(result + 352) = v2;
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  v8 = (Caver::GUILabel *)v4[41];
  v9 = v4[43];
  if ( v9 != *((_QWORD *)v8 + 30) )
  {
    v10 = v4[44];
    if ( v10 )
      ++*(_QWORD *)(v10 + 8);
    v11 = (_QWORD *)*((_QWORD *)v8 + 31);
    *((_QWORD *)v8 + 30) = v9;
    *((_QWORD *)v8 + 31) = v10;
    if ( v11 )
    {
      v12 = v11[1] - 1LL;
      v11[1] = v12;
      if ( !v12 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
        v13 = v11[2] - 1LL;
        v11[2] = v13;
        if ( !v13 )
          (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
      }
    }
    return Caver::GUILabel::UpdateText(v8);
  }
  return result;
}

