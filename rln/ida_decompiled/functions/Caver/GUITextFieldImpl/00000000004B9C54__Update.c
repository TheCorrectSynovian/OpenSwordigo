/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B9C54
 * Mangled: _ZN5Caver16GUITextFieldImpl6UpdateEf
 * Demangled: Caver::GUITextFieldImpl::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *
 * Referenced strings: 8
 *   insn=0x00000000004B9C60 string=0x00000000004B9C64 ""
 *   insn=0x00000000004B9C6C string=0x00000000004B9C70 "hbF9h"
 *   insn=0x00000000004B9C70 string=0x00000000004B9C74 "h"
 *   insn=0x00000000004B9C74 string=0x00000000004B9C78 "`"
 *   insn=0x00000000004B9C84 string=0x00000000004B9C88 "`"
 *   insn=0x00000000004B9C8C string=0x00000000004B9C90 "hfF9"
 *   insn=0x00000000004B9C94 string=0x00000000004B9C98 ""
 *   insn=0x00000000004B9C98 string=0x00000000004B9C9C "hf"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextFieldImpl::Update(Caver::GUITextFieldImpl *this, float a2)
{
  __int64 result; // x0
  float v5; // s0
  char v6; // w8

  result = Caver::GUIView::Update(this, a2);
  if ( *((_BYTE *)this + 408) )
  {
    v5 = *((float *)this + 103) + a2;
    *((float *)this + 103) = v5;
    if ( v5 > 0.5 )
    {
      v6 = *((_BYTE *)this + 409);
      *((_DWORD *)this + 103) = 0;
      *((_BYTE *)this + 409) = v6 ^ 1;
    }
  }
  return result;
}

