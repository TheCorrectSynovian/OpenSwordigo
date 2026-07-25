/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000212F28
 * Mangled: _ZN5Caver12AnimKeysNode6UpdateEf
 * Demangled: Caver::AnimKeysNode::Update(float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 29
 *   insn=0x0000000000212F28 string=0x0000000000212F2C "H"
 *   insn=0x0000000000212F2C string=0x0000000000212F30 "\t"
 *   insn=0x0000000000212F30 string=0x0000000000212F34 "I"
 *   insn=0x0000000000212F38 string=0x0000000000212F3C "!"
 *   insn=0x0000000000212F3C string=0x0000000000212F40 """
 *   insn=0x0000000000212F40 string=0x0000000000212F44 "*"
 *   insn=0x0000000000212F44 string=0x0000000000212F48 "@ "
 *   insn=0x0000000000212F50 string=0x0000000000212F54 " 8 "
 *   insn=0x0000000000212F54 string=0x0000000000212F58 "  "
 *   insn=0x0000000000212F58 string=0x0000000000212F5C " "
 *   insn=0x0000000000212F60 string=0x0000000000212F64 "\n"
 *   insn=0x0000000000212F64 string=0x0000000000212F68 "j"
 *   insn=0x0000000000212F70 string=0x0000000000212FB8 " "
 *   insn=0x0000000000212F7C string=0x0000000000212F80 " "
 *   insn=0x0000000000212F94 string=0x0000000000212F98 "-"
 *   insn=0x0000000000212F98 string=0x0000000000212F9C "\n"
 *   insn=0x0000000000212FA0 string=0x0000000000212FA4 "_"
 *   insn=0x0000000000212FA4 string=0x0000000000212FA8 "@"
 *   insn=0x0000000000212FC0 string=0x0000000000212FC4 "m"
 *   insn=0x0000000000212FC4 string=0x0000000000212FC8 " "
 *   insn=0x0000000000212FC8 string=0x0000000000212FCC "!"
 *   insn=0x0000000000212FD0 string=0x0000000000212FD4 "\t"
 *   insn=0x0000000000212FD8 string=0x0000000000212FDC ""
 *   insn=0x0000000000212FE0 string=0x0000000000212FE4 "?"
 *   insn=0x0000000000212FEC string=0x000000000021300C ""
 *   insn=0x0000000000212FF4 string=0x0000000000212FF8 ""5G"
 *   insn=0x0000000000212FF4 string=0x0000000000583734 "o"
 *   insn=0x0000000000212FFC string=0x0000000000213000 "!"
 *   insn=0x0000000000213000 string=0x0000000000213004 "  ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AnimKeysNode::Update(Caver::AnimKeysNode *this, float a2)
{
  __int64 v2; // x8
  float *v3; // x9
  float v4; // s1
  float v5; // s0
  float v6; // s0
  float v8; // s2
  float v9; // s1
  float v10; // s0
  int v11; // w8
  float v12; // s0

  v2 = *((_QWORD *)this + 3);
  if ( !v2 )
    return 0;
  if ( *((_BYTE *)this + 56) )
  {
    v3 = (float *)((char *)this + 12);
    v4 = *((float *)this + 3);
    v5 = (float)(*((float *)this + 12) * a2) * *((float *)this + 13);
    if ( *((_BYTE *)this + 57) )
    {
      v6 = v4 - v5;
      *v3 = v6;
      if ( v6 < 0.0 )
      {
        if ( *((_BYTE *)this + 44) )
          v6 = *((float *)this + 10);
        else
          v6 = 0.0;
        *v3 = v6;
      }
    }
    else
    {
      v8 = *((float *)this + 10);
      v6 = v5 + v4;
      *((float *)this + 3) = v6;
      if ( v6 > v8 )
      {
        v6 = 0.0;
        if ( !*((_BYTE *)this + 44) )
          v6 = v8;
        *((float *)this + 3) = v6;
      }
    }
  }
  else
  {
    v3 = (float *)((char *)this + 12);
    v6 = *((float *)this + 3);
  }
  v9 = *((float *)this + 10);
  if ( v6 > v9 )
  {
    v6 = *((float *)this + 10);
    *v3 = v9;
  }
  v10 = v6 * *(float *)(v2 + 12);
  v11 = (int)v10;
  v12 = v10 - (float)(int)v10;
  if ( *((_DWORD *)this + 4) == v11 && fabsf(v12 - *((float *)this + 5)) <= 0.001 )
    return 0;
  *((_DWORD *)this + 4) = v11;
  *((float *)this + 5) = v12;
  return 1;
}

