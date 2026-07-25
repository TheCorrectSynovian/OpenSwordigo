/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA3E8
 * Mangled: _ZN5Caver16GUITextFieldImpl10UpdateFontEv
 * Demangled: Caver::GUITextFieldImpl::UpdateFont(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *
 * Referenced strings: 15
 *   insn=0x00000000004BA3F4 string=0x00000000004BA3F8 ""
 *   insn=0x00000000004BA3F8 string=0x00000000004BA3FC "iz@"
 *   insn=0x00000000004BA404 string=0x00000000004BA408 "\t"
 *   insn=0x00000000004BA40C string=0x00000000004BA410 "*"
 *   insn=0x00000000004BA40C string=0x00000000004BA41C "t~@"
 *   insn=0x00000000004BA410 string=0x00000000004BA414 "J"
 *   insn=0x00000000004BA414 string=0x00000000004BA418 "*"
 *   insn=0x00000000004BA41C string=0x00000000004BA420 "h&"
 *   insn=0x00000000004BA420 string=0x00000000004BA424 "4"
 *   insn=0x00000000004BA428 string=0x00000000004BA42C ""
 *   insn=0x00000000004BA43C string=0x00000000004BA440 "\t@"
 *   insn=0x00000000004BA448 string=0x00000000004BA44C ""
 *   insn=0x00000000004BA45C string=0x00000000004BA460 "@"
 *   insn=0x00000000004BA470 string=0x00000000004BA474 "'"
 *   insn=0x00000000004BA474 string=0x00000000001F8510 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::GUITextFieldImpl::UpdateFont(_QWORD *this)
{
  Caver::GUILabel *v1; // x19
  __int64 v2; // x8
  __int64 v3; // x9
  _QWORD *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x8

  v1 = (Caver::GUILabel *)this[41];
  v2 = this[43];
  if ( v2 != *((_QWORD *)v1 + 30) )
  {
    v3 = this[44];
    if ( v3 )
      ++*(_QWORD *)(v3 + 8);
    v4 = (_QWORD *)*((_QWORD *)v1 + 31);
    *((_QWORD *)v1 + 30) = v2;
    *((_QWORD *)v1 + 31) = v3;
    if ( v4 )
    {
      v5 = v4[1] - 1LL;
      v4[1] = v5;
      if ( !v5 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
        v6 = v4[2] - 1LL;
        v4[2] = v6;
        if ( !v6 )
          (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
      }
    }
    return (_QWORD *)Caver::GUILabel::UpdateText(v1);
  }
  return this;
}

