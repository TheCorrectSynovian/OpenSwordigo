/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D6368
 * Mangled: _ZN5Caver10BinaryFile4OpenERKSsNS0_4ModeEb
 * Demangled: Caver::BinaryFile::Open(std::string const&,Caver::BinaryFile::Mode,bool)
 *
 * Callers: 1
 *   0x00000000002005B0  Caver::BinaryFile::Open(std::string const&,Caver::BinaryFile::Mode,bool)
 *
 * Callees: 10
 *   0x00000000001F4200  .lseek
 *   0x00000000001F4CB0  .AAsset_openFileDescriptor
 *   0x00000000001F5F40  .fseek
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA140  .gzdopen
 *   0x00000000001FC310  .ftell
 *   0x00000000001FDBA0  Caver::GetAndroidAssetManager(void)
 *   0x00000000002002F0  .AAssetManager_open
 *   0x0000000000201180  .fopen
 *   0x0000000000201240  .AAsset_close
 *
 * Referenced strings: 39
 *   insn=0x00000000004D637C string=0x00000000004D6380 "W"
 *   insn=0x00000000004D639C string=0x00000000004D63A0 "h"
 *   insn=0x00000000004D63A8 string=0x00000000001FDBA0 "0'"
 *   insn=0x00000000004D63C8 string=0x00000000004D63CC "9z"
 *   insn=0x00000000004D63CC string=0x00000000001F4CB0 "P'"
 *   insn=0x00000000004D63EC string=0x00000000004D63F0 " "
 *   insn=0x00000000004D63EC string=0x00000000001F4200 "P'"
 *   insn=0x00000000004D63F0 string=0x00000000004D6470 ""
 *   insn=0x00000000004D63F4 string=0x00000000004D63F8 "h"
 *   insn=0x00000000004D63FC string=0x00000000004D6400 ""
 *   insn=0x00000000004D6400 string=0x00000000004D6404 "\t"
 *   insn=0x00000000004D6400 string=0x00000000005969E5 "rb"
 *   insn=0x00000000004D6404 string=0x00000000004D6408 ""
 *   insn=0x00000000004D6404 string=0x0000000000596A04 "wb"
 *   insn=0x00000000004D6408 string=0x00000000004D640C ")"
 *   insn=0x00000000004D6410 string=0x00000000004D6414 "!"
 *   insn=0x00000000004D6414 string=0x00000000004D6418 "Z"
 *   insn=0x00000000004D6418 string=0x00000000004D641C "h"
 *   insn=0x00000000004D641C string=0x00000000004D6420 "`"
 *   insn=0x00000000004D6438 string=0x00000000004D643C "h"
 *   insn=0x00000000004D6438 string=0x00000000001F5F40 "P'"
 *   insn=0x00000000004D6444 string=0x00000000004D6448 "A"
 *   insn=0x00000000004D6448 string=0x00000000004D644C "`"
 *   insn=0x00000000004D6450 string=0x00000000004D6454 "h"
 *   insn=0x00000000004D6450 string=0x00000000001FC310 "0'"
 *   insn=0x00000000004D6454 string=0x00000000004D6458 "`"
 *   insn=0x00000000004D645C string=0x00000000004D6460 "a"
 *   insn=0x00000000004D6460 string=0x00000000004D6464 "`"
 *   insn=0x00000000004D6470 string=0x00000000004D6474 "\t"
 *   insn=0x00000000004D6474 string=0x00000000004D6478 ""
 *   insn=0x00000000004D6474 string=0x000000000059827C "wb9f"
 *   insn=0x00000000004D6478 string=0x00000000004D647C ")"
 *   insn=0x00000000004D6480 string=0x00000000004D6484 "!"
 *   insn=0x00000000004D6488 string=0x00000000004D648C "-"
 *   insn=0x00000000004D648C string=0x00000000004D6490 "`"
 *   insn=0x00000000004D648C string=0x00000000001FA140 "0'"
 *   insn=0x00000000004D6494 string=0x00000000004D6498 "h"
 *   insn=0x00000000004D64CC string=0x00000000004D64E8 "z"
 *   insn=0x00000000004D64E8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BinaryFile::Open(int *a1, const char **a2, int a3, char a4)
{
  AAssetManager *AndroidAssetManager; // x0
  AAsset *v7; // x0
  AAsset *v8; // x22
  int v9; // w21
  const char *v10; // x0
  const char *v11; // x1
  FILE *v12; // x0
  int v13; // w8
  FILE *v14; // x0
  int v15; // w0
  int v16; // w8
  FILE *v17; // x0
  __int64 v18; // x0
  off_t outLength; // [xsp+8h] [xbp-48h] BYREF
  off_t outStart[2]; // [xsp+10h] [xbp-40h] BYREF

  outStart[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (a4 & 1) != 0 )
  {
    *a1 = 2;
    a1[4] = 0;
    AndroidAssetManager = (AAssetManager *)Caver::GetAndroidAssetManager((Caver *)a1);
    v7 = AAssetManager_open(AndroidAssetManager, *a2, 2);
    v8 = v7;
    if ( v7 )
    {
      v9 = AAsset_openFileDescriptor(v7, outStart, &outLength);
      AAsset_close(v8);
      if ( (v9 & 0x80000000) == 0 )
        lseek(v9, outStart[0], 0);
    }
    v18 = gzdopen();
    *((_QWORD *)a1 + 1) = v18;
    if ( !v18 || *a1 != 2 )
      return 0;
  }
  else
  {
    *a1 = 1;
    v10 = *a2;
    if ( a3 == 1 )
      v11 = "wb";
    else
      v11 = "rb";
    v12 = fopen(v10, v11);
    v13 = *a1;
    *((_QWORD *)a1 + 1) = v12;
    if ( v13 != 1 || !v12 )
      return 0;
    fseek(v12, 0, 2);
    v14 = 0;
    if ( *a1 == 1 )
      v14 = (FILE *)*((_QWORD *)a1 + 1);
    v15 = ftell(v14);
    v16 = *a1;
    a1[4] = v15;
    if ( v16 == 1 )
      v17 = (FILE *)*((_QWORD *)a1 + 1);
    else
      v17 = 0;
    fseek(v17, 0, 0);
  }
  return 1;
}

