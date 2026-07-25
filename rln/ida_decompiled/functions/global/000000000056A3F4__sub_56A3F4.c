/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056A3F4
 * Mangled: sub_56A3F4
 * Demangled: sub_56A3F4
 *
 * Callers: 4
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A5B8  sub_56A5B8
 *   0x000000000056A6A8  sub_56A6A8
 *   0x000000000056A798  sub_56A798
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x0000000000201760  .memcpy
 *   0x000000000056554C  sub_56554C
 *
 * Referenced strings: 23
 *   insn=0x000000000056A40C string=0x000000000056A410 " "
 *   insn=0x000000000056A414 string=0x000000000056A418 "B"
 *   insn=0x000000000056A418 string=0x000000000056A41C "_"
 *   insn=0x000000000056A420 string=0x000000000056A424 "_"
 *   insn=0x000000000056A428 string=0x000000000056A42C "H"
 *   insn=0x000000000056A42C string=0x000000000056A430 "`"
 *   insn=0x000000000056A42C string=0x000000000056A4F4 " "
 *   insn=0x000000000056A438 string=0x000000000056A43C "?"
 *   insn=0x000000000056A438 string=0x000000000056A468 "`f"
 *   insn=0x000000000056A43C string=0x000000000056A440 "B"
 *   insn=0x000000000056A444 string=0x000000000056A448 "s"
 *   insn=0x000000000056A44C string=0x000000000056A450 "s"
 *   insn=0x000000000056A450 string=0x000000000056A454 "!"
 *   insn=0x000000000056A460 string=0x000000000056A464 "s"
 *   insn=0x000000000056A468 string=0x000000000056A46C "],"
 *   insn=0x000000000056A46C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000056A480 string=0x000000000056A484 "B"
 *   insn=0x000000000056A484 string=0x000000000056A4AC "_"
 *   insn=0x000000000056A4CC string=0x000000000056A4D0 "@"
 *   insn=0x000000000056A4F4 string=0x000000000056A4F8 "_"
 *   insn=0x000000000056A4F8 string=0x000000000056A4FC "S "
 *   insn=0x000000000056A51C string=0x000000000056A524 "\n"
 *   insn=0x000000000056A51C string=0x000000000059F980 "basic_string::_S_create"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_56A3F4(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // x1
  unsigned __int64 v5; // x2
  unsigned __int64 v6; // x19
  __int64 v7; // x0
  __int64 *v8; // x20
  size_t v9; // x2
  void *v10; // x3

  v4 = *(_QWORD *)(a1 + 8);
  v5 = a3 + *(_QWORD *)a1;
  if ( v5 > 0x3FFFFFFFFFFFFFF9LL )
    sub_56554C("basic_string::_S_create");
  v6 = v5;
  if ( v5 > v4 )
  {
    if ( v5 < 2 * v4 )
      v6 = 2 * v4;
    else
      v6 = v5;
  }
  if ( v6 + 57 > 0x1000 && v4 < v6 )
  {
    v6 = v6 + 4096 - (((_WORD)v6 + 57) & 0xFFF);
    if ( v6 > 0x3FFFFFFFFFFFFFF9LL )
      v6 = 0x3FFFFFFFFFFFFFF9LL;
  }
  v7 = operator new(v6 + 25);
  v8 = (__int64 *)v7;
  v9 = *(_QWORD *)a1;
  v10 = (void *)(v7 + 24);
  *(_QWORD *)(v7 + 8) = v6;
  *(_DWORD *)(v7 + 16) = 0;
  if ( v9 )
  {
    v10 = (void *)(v7 + 24);
    if ( v9 == 1 )
    {
      *(_BYTE *)(v7 + 24) = *(_BYTE *)(a1 + 24);
      v9 = *(_QWORD *)a1;
      if ( (__int64 *)v7 == &qword_6FD2E0 )
        return v10;
      goto LABEL_12;
    }
    v10 = memcpy((void *)(v7 + 24), (const void *)(a1 + 24), v9);
    v9 = *(_QWORD *)a1;
  }
  if ( v8 == &qword_6FD2E0 )
    return v10;
LABEL_12:
  *v8 = v9;
  *((_BYTE *)v8 + v9 + 24) = 0;
  return v10;
}

