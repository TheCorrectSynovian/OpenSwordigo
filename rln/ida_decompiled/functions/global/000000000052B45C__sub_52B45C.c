/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052B45C
 * Mangled: sub_52B45C
 * Demangled: sub_52B45C
 *
 * Callers: 21
 *   0x000000000052B4F4  sub_52B4F4
 *   0x000000000052B780  sub_52B780
 *   0x000000000052DBF0  sub_52DBF0
 *   0x000000000052E2BC  sub_52E2BC
 *   0x000000000052E854  sub_52E854
 *   0x000000000052FF60  sub_52FF60
 *   0x0000000000530504  sub_530504
 *   0x00000000005347F0  sub_5347F0
 *   0x000000000053557C  sub_53557C
 *   0x0000000000536300  sub_536300
 *   0x0000000000536428  sub_536428
 *   0x0000000000536618  sub_536618
 *   0x00000000005372A4  sub_5372A4
 *   0x00000000005374EC  sub_5374EC
 *   0x0000000000537734  sub_537734
 *   0x000000000053797C  sub_53797C
 *   0x0000000000538714  sub_538714
 *   0x00000000005390F0  sub_5390F0
 *   0x0000000000539A80  sub_539A80
 *   0x000000000053A47C  sub_53A47C
 *   0x000000000053AE2C  sub_53AE2C
 *
 * Callees: 2
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 9
 *   insn=0x000000000052B45C string=0x000000000052B460 "B<G"
 *   insn=0x000000000052B460 string=0x000000000052B464 """
 *   insn=0x000000000052B468 string=0x000000000052B46C "b"
 *   insn=0x000000000052B46C string=0x000000000052B470 "D"
 *   insn=0x000000000052B470 string=0x000000000052B474 "d"
 *   insn=0x000000000052B478 string=0x000000000052B47C "_"
 *   insn=0x000000000052B488 string=0x000000000052B48C "C"
 *   insn=0x000000000052B48C string=0x000000000052B490 "_"
 *   insn=0x000000000052B494 string=0x000000000052B498 "l"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_52B45C(unsigned int *a1)
{
  unsigned int *v1; // x3
  int v2; // w2
  int v3; // w2

  if ( !&pthread_create )
  {
    v3 = a1[4];
    a1[4] = v3 - 1;
    if ( v3 > 0 )
      return;
LABEL_7:
    operator delete(a1);
    return;
  }
  v1 = a1 + 4;
  do
    v2 = __ldaxr(v1);
  while ( __stlxr(v2 - 1, v1) );
  if ( v2 <= 0 )
    goto LABEL_7;
}

