/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BBFE0
 * Mangled: _ZN5Caver3Map14UnflagAllNodesEv
 * Demangled: Caver::Map::UnflagAllNodes(void)
 *
 * Callers: 1
 *   0x00000000001FA3A0  Caver::Map::UnflagAllNodes(void)
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x00000000003BBFE8 string=0x00000000003BBFEC "\tA"
 *   insn=0x00000000003BBFEC string=0x00000000003BBFF0 ")"
 *   insn=0x00000000003BBFF0 string=0x00000000003BBFF4 ")"
 *   insn=0x00000000003BBFF4 string=0x00000000003BBFF8 "*"
 *   insn=0x00000000003BBFF8 string=0x00000000003BBFFC "_"
 *   insn=0x00000000003BC004 string=0x00000000003BC008 "K"
 *   insn=0x00000000003BC004 string=0x00000000003BC038 "*"
 *   insn=0x00000000003BC028 string=0x00000000003BC02C "a"
 *   insn=0x00000000003BC02C string=0x00000000003BC030 "_"
 *   insn=0x00000000003BC03C string=0x00000000003BC040 "_q"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 **__fastcall Caver::Map::UnflagAllNodes(__int64 **this)
{
  __int64 *v1; // x8
  __int64 *v2; // x12
  unsigned __int64 v3; // x10
  __int64 *v4; // x9
  __int64 *v5; // x12
  __int64 v6; // x13
  __int64 v7; // x14
  __int64 v8; // t1
  __int64 v9; // t1

  v2 = *this;
  v1 = this[1];
  if ( *this != v1 )
  {
    v3 = ((unsigned __int64)((char *)(v1 - 2) - (char *)v2) >> 4) + 1;
    v4 = *this;
    if ( v3 < 3 )
      goto LABEL_9;
    v4 = &v2[2 * (v3 & 0x1FFFFFFFFFFFFFFELL)];
    v5 = v2 + 2;
    v6 = v3 & 0x1FFFFFFFFFFFFFFELL;
    do
    {
      v7 = *(v5 - 2);
      v8 = *v5;
      v5 += 4;
      v6 -= 2;
      *(_BYTE *)(v7 + 92) = 0;
      *(_BYTE *)(v8 + 92) = 0;
    }
    while ( v6 );
    if ( v3 != (v3 & 0x1FFFFFFFFFFFFFFELL) )
    {
LABEL_9:
      do
      {
        v9 = *v4;
        v4 += 2;
        *(_BYTE *)(v9 + 92) = 0;
      }
      while ( v1 != v4 );
    }
  }
  return this;
}

