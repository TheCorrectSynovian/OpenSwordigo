/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056AB54
 * Mangled: sub_56AB54
 * Demangled: sub_56AB54
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x0000000000201760  .memcpy
 *   0x000000000056554C  sub_56554C
 *
 * Referenced strings: 18
 *   insn=0x000000000056AB54 string=0x000000000056AB58 "?"
 *   insn=0x000000000056AB70 string=0x000000000056AB74 "S"
 *   insn=0x000000000056AB74 string=0x000000000056AB78 " "
 *   insn=0x000000000056AB7C string=0x000000000056AB80 "H"
 *   insn=0x000000000056AB80 string=0x000000000056AB84 "b"
 *   insn=0x000000000056AB88 string=0x000000000056AB8C "_"
 *   insn=0x000000000056AB90 string=0x000000000056AC0C "`f"
 *   insn=0x000000000056AB94 string=0x000000000056AB98 "B,@"
 *   insn=0x000000000056AB98 string=0x000000000056AB9C "`"
 *   insn=0x000000000056ABA4 string=0x000000000056ABA8 "#"
 *   insn=0x000000000056ABB0 string=0x000000000056ABB4 "4"
 *   insn=0x000000000056ABC0 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000056ABF0 string=0x000000000056ABF4 "!"
 *   insn=0x000000000056AC0C string=0x000000000056AC10 "t*"
 *   insn=0x000000000056AC28 string=0x000000000056AC2C "a"
 *   insn=0x000000000056AC2C string=0x000000000056AC30 " "
 *   insn=0x000000000056AC68 string=0x000000000056AC70 "7"
 *   insn=0x000000000056AC68 string=0x000000000059F980 "basic_string::_S_create"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_56AB54(__int64 *result, _BYTE *a2, _BYTE *a3)
{
  __int64 *v3; // x22
  size_t v4; // x19
  __int64 v5; // x2
  __int64 v6; // x20
  __int64 v7; // x21
  const void *v8; // x1
  void *v9; // x3
  __int64 v10; // x0

  v3 = result;
  if ( a2 == a3 )
  {
    *result = (__int64)&byte_6FD2F8;
    return result;
  }
  v4 = a3 - a2;
  if ( (unsigned __int64)(a3 - a2) > 0x3FFFFFFFFFFFFFF9LL )
    sub_56554C("basic_string::_S_create");
  if ( v4 + 57 > 0x1000 && v4 )
  {
    v5 = ((_WORD)v4 + 57) & 0xFFF;
    v6 = 0x3FFFFFFFFFFFFFF9LL;
    if ( v4 + 4096 - v5 <= 0x3FFFFFFFFFFFFFF9LL )
      v6 = v4 + 4096 - v5;
    v7 = operator new(v6 + 25);
    v8 = a2;
    v9 = (void *)(v7 + 24);
    *(_QWORD *)(v7 + 8) = v6;
    *(_DWORD *)(v7 + 16) = 0;
  }
  else
  {
    v10 = operator new(v4 + 25);
    *(_QWORD *)(v10 + 8) = v4;
    *(_DWORD *)(v10 + 16) = 0;
    v7 = v10;
    v9 = (void *)(v10 + 24);
    v8 = a2;
    if ( v4 == 1 )
    {
      *(_BYTE *)(v10 + 24) = *a2;
      goto LABEL_9;
    }
  }
  v9 = memcpy(v9, v8, v4);
LABEL_9:
  result = &qword_6FD2E0;
  if ( (__int64 *)v7 != &qword_6FD2E0 )
  {
    result = (__int64 *)(v7 + v4);
    *(_QWORD *)v7 = v4;
    *(_BYTE *)(v7 + v4 + 24) = 0;
  }
  *v3 = (__int64)v9;
  return result;
}

