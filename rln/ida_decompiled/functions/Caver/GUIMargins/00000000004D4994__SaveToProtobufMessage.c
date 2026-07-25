/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D4994
 * Mangled: _ZNK5Caver10GUIMargins21SaveToProtobufMessageEPNS_5Proto10GUIMarginsE
 * Demangled: Caver::GUIMargins::SaveToProtobufMessage(Caver::Proto::GUIMargins *)
 *
 * Callers: 1
 *   0x00000000001FAAB0  Caver::GUIMargins::SaveToProtobufMessage(Caver::Proto::GUIMargins *)
 *
 * Callees: 0
 *
 * Referenced strings: 26
 *   insn=0x00000000004D4998 string=0x00000000004D499C "h"
 *   insn=0x00000000004D4998 string=0x00000000004D49AC "("
 *   insn=0x00000000004D499C string=0x00000000004D49A0 "("
 *   insn=0x00000000004D499C string=0x00000000004D49C8 "("
 *   insn=0x00000000004D49A0 string=0x00000000004D49E4 "("
 *   insn=0x00000000004D49A4 string=0x00000000004D4A00 "("
 *   insn=0x00000000004D49AC string=0x00000000004D49B0 "\t"
 *   insn=0x00000000004D49B0 string=0x00000000004D49B4 ""
 *   insn=0x00000000004D49B4 string=0x00000000004D49B8 "("
 *   insn=0x00000000004D49B8 string=0x00000000004D49BC ")"
 *   insn=0x00000000004D49BC string=0x00000000004D49C0 ""
 *   insn=0x00000000004D49C8 string=0x00000000004D49CC "\t@"
 *   insn=0x00000000004D49CC string=0x00000000004D49D0 ""
 *   insn=0x00000000004D49D0 string=0x00000000004D49D4 "("
 *   insn=0x00000000004D49D4 string=0x00000000004D49D8 ")"
 *   insn=0x00000000004D49D8 string=0x00000000004D49DC ""
 *   insn=0x00000000004D49DC string=0x00000000004D49E0 "("
 *   insn=0x00000000004D49E4 string=0x00000000004D49E8 "\t"
 *   insn=0x00000000004D49E8 string=0x00000000004D49EC ""
 *   insn=0x00000000004D49EC string=0x00000000004D49F0 "("
 *   insn=0x00000000004D49F0 string=0x00000000004D49F4 ")"
 *   insn=0x00000000004D49F4 string=0x00000000004D49F8 ""
 *   insn=0x00000000004D49F8 string=0x00000000004D49FC "h"
 *   insn=0x00000000004D4A00 string=0x00000000004D4A04 "\t"
 *   insn=0x00000000004D4A04 string=0x00000000004D4A08 ""
 *   insn=0x00000000004D4A08 string=0x00000000004D4A0C ") "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int *__fastcall Caver::GUIMargins::SaveToProtobufMessage(int *this, Caver::Proto::GUIMargins *a2)
{
  int v2; // w8
  int v3; // w9
  int v4; // w9
  int v5; // w9
  int v6; // w8

  v2 = *this;
  if ( (*this & 1) != 0 )
  {
    v3 = this[1];
    *((_DWORD *)a2 + 7) |= 1u;
    *((_DWORD *)a2 + 3) = v3;
    v2 = *this;
    if ( (*this & 2) == 0 )
    {
LABEL_3:
      if ( (v2 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_8;
    }
  }
  else if ( (v2 & 2) == 0 )
  {
    goto LABEL_3;
  }
  v4 = this[2];
  *((_DWORD *)a2 + 7) |= 2u;
  *((_DWORD *)a2 + 4) = v4;
  v2 = *this;
  if ( (*this & 4) == 0 )
  {
LABEL_4:
    if ( (v2 & 8) == 0 )
      return this;
LABEL_9:
    v6 = *((_DWORD *)a2 + 7) | 8;
    *((_DWORD *)a2 + 6) = this[4];
    *((_DWORD *)a2 + 7) = v6;
    return this;
  }
LABEL_8:
  v5 = this[3];
  *((_DWORD *)a2 + 7) |= 4u;
  *((_DWORD *)a2 + 5) = v5;
  if ( (*this & 8) != 0 )
    goto LABEL_9;
  return this;
}

