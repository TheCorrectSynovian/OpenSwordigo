/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E42F0
 * Mangled: _ZN5Caver11TargetFrame4ShowEv
 * Demangled: Caver::TargetFrame::Show(void)
 *
 * Callers: 1
 *   0x00000000001F4C70  Caver::TargetFrame::Show(void)
 *
 * Callees: 1
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *
 * Referenced strings: 9
 *   insn=0x00000000003E4300 string=0x00000000003E4304 "t"
 *   insn=0x00000000003E4300 string=0x00000000001FA5A0 "0'"
 *   insn=0x00000000003E4308 string=0x00000000003E430C "`"
 *   insn=0x00000000003E430C string=0x00000000003E4310 "4"
 *   insn=0x00000000003E4314 string=0x00000000003E4318 ""
 *   insn=0x00000000003E4328 string=0x00000000003E432C "\t@"
 *   insn=0x00000000003E4334 string=0x00000000003E4338 ""
 *   insn=0x00000000003E4348 string=0x00000000003E434C "@"
 *   insn=0x00000000003E4358 string=0x00000000003E435C "h2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TargetFrame::Show(Caver::TargetFrame *this)
{
  __int64 result; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8

  result = Caver::GUIView::RemoveAllAnimations(this);
  v3 = (_QWORD *)*((_QWORD *)this + 97);
  *((_OWORD *)this + 48) = 0u;
  if ( v3 )
  {
    v4 = v3[1] - 1LL;
    v3[1] = v4;
    if ( !v4 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v5 = v3[2] - 1LL;
      v3[2] = v5;
      if ( !v5 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  *((_DWORD *)this + 59) = 0;
  *((_BYTE *)this + 268) = 1;
  *((_BYTE *)this + 228) = 0;
  return result;
}

