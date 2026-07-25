/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000572C48
 * Mangled: sub_572C48
 * Demangled: sub_572C48
 *
 * Callers: 2
 *   0x00000000005764B0  sub_5764B0
 *   0x0000000000576A34  sub_576A34
 *
 * Callees: 0
 *
 * Referenced strings: 22
 *   insn=0x0000000000572C48 string=0x0000000000572C4C """
 *   insn=0x0000000000572C4C string=0x0000000000572C50 "_|"
 *   insn=0x0000000000572C50 string=0x0000000000572C54 "`"
 *   insn=0x0000000000572C54 string=0x0000000000572C58 " "
 *   insn=0x0000000000572C54 string=0x0000000000572C60 "#"
 *   insn=0x0000000000572C64 string=0x0000000000572C68 "$"
 *   insn=0x0000000000572C70 string=0x0000000000572CC8 "#"
 *   insn=0x0000000000572C74 string=0x0000000000572C78 "!"
 *   insn=0x0000000000572C78 string=0x0000000000572C7C "?$"
 *   insn=0x0000000000572C84 string=0x0000000000572C88 "c"
 *   insn=0x0000000000572C90 string=0x0000000000572C94 """
 *   insn=0x0000000000572C94 string=0x0000000000572C98 "A"
 *   insn=0x0000000000572C98 string=0x0000000000572C9C "!"
 *   insn=0x0000000000572C9C string=0x0000000000572CA0 "d"
 *   insn=0x0000000000572CA0 string=0x0000000000572CA4 "!"
 *   insn=0x0000000000572CA8 string=0x0000000000572CAC "B"
 *   insn=0x0000000000572CAC string=0x0000000000572CB0 "_$"
 *   insn=0x0000000000572CB8 string=0x0000000000572CBC " "
 *   insn=0x0000000000572CCC string=0x0000000000572CD0 "$@9"
 *   insn=0x0000000000572CD4 string=0x0000000000572CD8 "!"
 *   insn=0x0000000000572CD8 string=0x0000000000572CDC "?$"
 *   insn=0x0000000000572CE0 string=0x0000000000572CE4 "%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_572C48(__int64 a1)
{
  _BYTE *v1; // x1
  _BYTE *v3; // x3
  int v4; // w4
  int v5; // w5
  char *v6; // x3
  __int64 v7; // x1
  __int64 v8; // x1
  char v9; // t1

  v1 = *(_BYTE **)(a1 + 24);
  if ( *v1 != 95 )
    return 1;
  v3 = v1 + 1;
  *(_QWORD *)(a1 + 24) = v1 + 1;
  v4 = (unsigned __int8)v1[1];
  if ( v4 == 110 )
  {
    v3 = v1 + 2;
    *(_QWORD *)(a1 + 24) = v1 + 2;
    LOBYTE(v4) = v1[2];
    if ( (unsigned __int8)(v4 - 48) <= 9u )
    {
      v5 = 1;
      goto LABEL_6;
    }
    return 1;
  }
  if ( (unsigned __int8)(v4 - 48) > 9u )
    return 1;
  v5 = 0;
LABEL_6:
  v6 = v3 + 1;
  v7 = 0;
  do
  {
    *(_QWORD *)(a1 + 24) = v6;
    v8 = 10 * v7 + (unsigned __int8)v4;
    v9 = *v6++;
    LOBYTE(v4) = v9;
    v7 = v8 - 48;
  }
  while ( (unsigned __int8)(v9 - 48) <= 9u );
  if ( !v5 )
    return 1;
  return (unsigned __int64)(v7 - 1) >> 63;
}

