/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AA758
 * Mangled: _ZN5Caver13GUITextBubble6UpdateEf
 * Demangled: Caver::GUITextBubble::Update(float)
 *
 * Callers: 1
 *   0x00000000001F3E00  Caver::GUITextBubble::Update(float)
 *
 * Callees: 1
 *   0x0000000000568EA8  sub_568EA8
 *
 * Referenced strings: 29
 *   insn=0x00000000004AA774 string=0x00000000004AA778 ""
 *   insn=0x00000000004AA77C string=0x00000000004AA780 "\t"
 *   insn=0x00000000004AA784 string=0x00000000004AA788 "b"
 *   insn=0x00000000004AA788 string=0x00000000004AA78C "\t"
 *   insn=0x00000000004AA788 string=0x00000000004AA7F4 ""
 *   insn=0x00000000004AA794 string=0x00000000004AA7A8 "\tiu8?"
 *   insn=0x00000000004AA79C string=0x00000000004AA7A0 "h"
 *   insn=0x00000000004AA7A0 string=0x00000000004AA7A4 "vB@"
 *   insn=0x00000000004AA7A8 string=0x00000000004AA7AC "?"
 *   insn=0x00000000004AA7B0 string=0x00000000004AA7B4 "\t"
 *   insn=0x00000000004AA7BC string=0x00000000004AA7D0 "\tiv8"
 *   insn=0x00000000004AA7C4 string=0x00000000004AA7C8 "h"
 *   insn=0x00000000004AA7C8 string=0x00000000004AA7CC "uB@"
 *   insn=0x00000000004AA7D4 string=0x00000000004AA7D8 "?)"
 *   insn=0x00000000004AA7E0 string=0x00000000004AA7E4 "uB"
 *   insn=0x00000000004AA7E4 string=0x00000000004AA7E8 "\t"
 *   insn=0x00000000004AA7F8 string=0x00000000004AA7FC "B"
 *   insn=0x00000000004AA7FC string=0x00000000004AA800 "`"
 *   insn=0x00000000004AA7FC string=0x00000000004AA824 "hBB9h"
 *   insn=0x00000000004AA808 string=0x00000000004AA80C "`"
 *   insn=0x00000000004AA80C string=0x00000000004AA810 "-"
 *   insn=0x00000000004AA818 string=0x00000000004AA81C "hB"
 *   insn=0x00000000004AA81C string=0x00000000004AA820 ""
 *   insn=0x00000000004AA824 string=0x00000000004AA828 "h"
 *   insn=0x00000000004AA828 string=0x00000000004AA82C "`"
 *   insn=0x00000000004AA838 string=0x00000000004AA83C "`"
 *   insn=0x00000000004AA840 string=0x00000000004AA844 "hFB9"
 *   insn=0x00000000004AA848 string=0x00000000004AA84C ""
 *   insn=0x00000000004AA84C string=0x00000000004AA850 "hF"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextBubble::Update(__int64 this, float a2)
{
  __int64 v2; // x19
  __int64 v3; // x8
  __int64 v4; // x20
  unsigned __int64 v6; // x21
  unsigned __int64 v7; // x22
  int v8; // w9
  float v9; // s1
  float v10; // s0
  float v11; // s0
  char v12; // w8

  v2 = this;
  v4 = this + 40;
  v3 = *(_QWORD *)(this + 40);
  v6 = *(_QWORD *)(this + 128);
  if ( v6 < *(_QWORD *)(v3 - 24) )
  {
    do
    {
      v7 = v6;
      if ( (*(_DWORD *)(v3 - 8) & 0x80000000) == 0 )
      {
        this = sub_568EA8(v4);
        v3 = *(_QWORD *)(v2 + 40);
        v7 = *(_QWORD *)(v2 + 128);
      }
      if ( *(_BYTE *)(v3 + v6) != 32 )
      {
        v6 = v7;
        if ( (*(_DWORD *)(v3 - 8) & 0x80000000) == 0 )
        {
          this = sub_568EA8(v4);
          v3 = *(_QWORD *)(v2 + 40);
          v6 = *(_QWORD *)(v2 + 128);
        }
        v8 = *(unsigned __int8 *)(v3 + v7);
        v7 = v6;
        if ( v8 != 10 )
          break;
      }
      v6 = v7 + 1;
      *(_QWORD *)(v2 + 128) = v7 + 1;
    }
    while ( v7 + 1 < *(_QWORD *)(v3 - 24) );
  }
  if ( v6 >= *(_QWORD *)(v3 - 24) )
  {
    if ( *(_BYTE *)(v2 + 144) )
    {
      v11 = *(float *)(v2 + 148) + a2;
      *(float *)(v2 + 148) = v11;
      if ( v11 >= 0.5 )
      {
        v12 = *(_BYTE *)(v2 + 145);
        *(_DWORD *)(v2 + 148) = 0;
        *(_BYTE *)(v2 + 145) = v12 ^ 1;
      }
    }
  }
  else
  {
    v9 = *(float *)(v2 + 140);
    v10 = *(float *)(v2 + 136) + a2;
    *(float *)(v2 + 136) = v10;
    if ( v10 > v9 )
    {
      *(_DWORD *)(v2 + 136) = 0;
      *(_QWORD *)(v2 + 128) = v6 + 1;
    }
  }
  return this;
}

