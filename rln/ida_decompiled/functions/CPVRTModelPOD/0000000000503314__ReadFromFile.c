/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000503314
 * Mangled: _ZN13CPVRTModelPOD12ReadFromFileEPKcPcmS2_m
 * Demangled: CPVRTModelPOD::ReadFromFile(char const*,char *,ulong,char *,ulong)
 *
 * Callers: 0
 *
 * Callees: 15
 *   0x00000000001F4160  PVRTErrorOutputDebug(char const*,...)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6700  PVRTModelPODToggleFixedPoint(SPODScene &)
 *   0x00000000001F6770  .calloc
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F79F0  CPVRTModelPOD::InitImpl(void)
 *   0x00000000001F89E0  .free
 *   0x00000000001F8C70  CPVRTResourceFile::CPVRTResourceFile(char const*)
 *   0x00000000001FA120  .strcmp
 *   0x00000000001FBC40  .memset
 *   0x00000000001FD7E0  CPVRTResourceFile::IsOpen(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000510538  sub_510538
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 92
 *   insn=0x0000000000503330 string=0x0000000000503334 "Z"
 *   insn=0x0000000000503334 string=0x0000000000503338 ";"
 *   insn=0x0000000000503338 string=0x000000000050333C "H"
 *   insn=0x000000000050333C string=0x0000000000503340 "{{A"
 *   insn=0x0000000000503358 string=0x000000000050335C "|C"
 *   insn=0x0000000000503370 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000050337C string=0x0000000000503380 "<"
 *   insn=0x0000000000503380 string=0x00000000001F8C70 "0'"
 *   insn=0x000000000050338C string=0x0000000000503390 " "
 *   insn=0x000000000050338C string=0x00000000001FD7E0 "0'"
 *   insn=0x0000000000503390 string=0x00000000005033D4 ""
 *   insn=0x00000000005033A8 string=0x00000000005033AC "0"
 *   insn=0x00000000005033B4 string=0x00000000005033B8 "hC"
 *   insn=0x00000000005033C0 string=0x00000000005033C4 ""
 *   insn=0x00000000005033C0 string=0x00000000005033F0 "H"
 *   insn=0x00000000005033C4 string=0x00000000005033C8 ""
 *   insn=0x00000000005033CC string=0x00000000005033D0 ""
 *   insn=0x00000000005033D4 string=0x00000000005033D8 ""
 *   insn=0x00000000005033E0 string=0x00000000005033E4 "hC"
 *   insn=0x00000000005033F8 string=0x00000000005033FC "A"
 *   insn=0x0000000000503424 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000503430 string=0x0000000000503434 "hC"
 *   insn=0x0000000000503430 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000050343C string=0x0000000000503440 "!"
 *   insn=0x0000000000503450 string=0x0000000000503454 ""
 *   insn=0x0000000000503454 string=0x0000000000503458 ""
 *   insn=0x000000000050348C string=0x0000000000503490 "H"
 *   insn=0x0000000000503494 string=0x0000000000503498 ""
 *   insn=0x00000000005034BC string=0x00000000005034C0 ")"
 *   insn=0x00000000005034BC string=0x00000000001FBC40 "0'"
 *   insn=0x00000000005034C4 string=0x00000000005034C8 ""
 *   insn=0x00000000005034CC string=0x00000000005034D0 ")\t@"
 *   insn=0x00000000005034F8 string=0x00000000005034FC " "
 *   insn=0x0000000000503510 string=0x0000000000503514 "W"
 *   insn=0x0000000000503520 string=0x0000000000503524 "("
 *   insn=0x0000000000503530 string=0x0000000000503534 "\t@"
 *   insn=0x000000000050354C string=0x0000000000503550 "h"
 *   insn=0x0000000000503550 string=0x0000000000503554 "h"
 *   insn=0x000000000050355C string=0x0000000000503560 ""
 *   insn=0x0000000000503560 string=0x0000000000503564 "\t"
 *   insn=0x0000000000503564 string=0x0000000000503568 "?"
 *   insn=0x000000000050356C string=0x00000000005035C0 ")}"
 *   insn=0x0000000000503578 string=0x000000000050357C "Hy"
 *   insn=0x000000000050357C string=0x0000000000503580 ""
 *   insn=0x0000000000503584 string=0x00000000005035EC "\"
 *   insn=0x0000000000503588 string=0x000000000050358C "("
 *   insn=0x0000000000503598 string=0x000000000050359C "\t@"
 *   insn=0x000000000050359C string=0x00000000005035A0 "v"
 *   insn=0x00000000005035A0 string=0x00000000005035A4 "b3"
 *   insn=0x00000000005035C8 string=0x00000000005035CC "`"
 *   insn=0x00000000005035CC string=0x00000000005035D0 "i"
 *   insn=0x00000000005035E0 string=0x00000000005035E4 "|"
 *   insn=0x00000000005035E0 string=0x0000000000503650 "("
 *   insn=0x00000000005035E4 string=0x00000000005035E8 "_"
 *   insn=0x00000000005035EC string=0x00000000005035F0 "("
 *   insn=0x00000000005035FC string=0x0000000000503600 "\t@"
 *   insn=0x0000000000503600 string=0x0000000000503604 "v"
 *   insn=0x0000000000503604 string=0x0000000000503608 "b3"
 *   insn=0x000000000050362C string=0x0000000000503630 ""
 *   insn=0x0000000000503638 string=0x000000000050363C "H"
 *   insn=0x0000000000503658 string=0x000000000050365C "@"
 *   insn=0x0000000000503664 string=0x0000000000503668 "("
 *   insn=0x0000000000503674 string=0x0000000000503678 "\t@"
 *   insn=0x000000000050367C string=0x0000000000503680 " "
 *   insn=0x0000000000503680 string=0x0000000000503684 "-"
 *   insn=0x000000000050369C string=0x00000000005036A0 "@"
 *   insn=0x00000000005036A0 string=0x00000000005036A4 "8"
 *   insn=0x00000000005036AC string=0x00000000005036B0 "`"
 *   insn=0x00000000005036B8 string=0x00000000005036BC "-"
 *   insn=0x00000000005036BC string=0x00000000001F6770 "0'"
 *   insn=0x00000000005036C0 string=0x00000000005036C4 "3"
 *   insn=0x00000000005036C4 string=0x00000000005036C8 "("
 *   insn=0x00000000005036C8 string=0x00000000005036CC "b"
 *   insn=0x00000000005036D4 string=0x00000000005036D8 "\t@"
 *   insn=0x00000000005036DC string=0x00000000005036E0 " "
 *   insn=0x00000000005036E4 string=0x000000000059B628 "AB.POD.2.0"
 *   insn=0x00000000005036E8 string=0x00000000005036EC "!"
 *   insn=0x00000000005036F0 string=0x00000000001FA120 "0'"
 *   insn=0x00000000005036FC string=0x0000000000503700 "("
 *   insn=0x00000000005036FC string=0x00000000001F89E0 "0'"
 *   insn=0x000000000050370C string=0x0000000000503710 "\t@"
 *   insn=0x0000000000503748 string=0x000000000050374C ""
 *   insn=0x000000000050374C string=0x0000000000503750 "H"
 *   insn=0x0000000000503754 string=0x00000000001F6700 "0'"
 *   insn=0x0000000000503758 string=0x000000000050375C "("
 *   insn=0x000000000050375C string=0x0000000000503760 "("
 *   insn=0x0000000000503768 string=0x00000000001F79F0 "0'"
 *   insn=0x0000000000503778 string=0x0000000000503780 "x"
 *   insn=0x0000000000503778 string=0x000000000059B633 "Error: Endianness mismatch between the .pod file and the platform.\n"
 *   insn=0x0000000000503780 string=0x00000000001F4160 "P'"
 *   insn=0x0000000000503788 string=0x000000000050378C ""
 *   insn=0x0000000000503794 string=0x0000000000503798 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTModelPOD::ReadFromFile(
        CPVRTModelPOD *this,
        const char *a2,
        char *a3,
        __int64 a4,
        char *a5,
        __int64 a6)
{
  CPVRTResourceFile *v12; // x24
  unsigned int v13; // w19
  void (__fastcall **v15)(CSourceStream *__hidden); // [xsp+A4h] [xbp-70h] BYREF
  CPVRTResourceFile *v16; // [xsp+ACh] [xbp-68h]
  __int64 v17; // [xsp+B4h] [xbp-60h]
  __int64 v18; // [xsp+BCh] [xbp-58h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v15 = off_6D8DB0;
  v17 = 0;
  v12 = (CPVRTResourceFile *)operator new(0x20u);
  CPVRTResourceFile::CPVRTResourceFile(v12, a2);
  v16 = v12;
  if ( (CPVRTResourceFile::IsOpen(v12) & 1) != 0 )
  {
    v13 = ((__int64 (__fastcall *)(CPVRTModelPOD *, void (__fastcall ***)(CSourceStream *__hidden), char *, __int64, char *, __int64))loc_50346C)(
            this,
            &v15,
            a3,
            a4,
            a5,
            a6);
    v15 = off_6D8DB0;
    if ( v16 )
      (*(void (__fastcall **)(CPVRTResourceFile *))(*(_QWORD *)v16 + 8LL))(v16);
  }
  else
  {
    (*(void (__fastcall **)(CPVRTResourceFile *))(*(_QWORD *)v12 + 8LL))(v12);
    v15 = off_6D8DB0;
    v16 = 0;
    return 1;
  }
  return v13;
}

