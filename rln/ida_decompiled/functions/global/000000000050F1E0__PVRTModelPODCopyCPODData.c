/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000050F1E0
 * Mangled: _Z24PVRTModelPODCopyCPODDataRK8CPODDataRS_jb
 * Demangled: PVRTModelPODCopyCPODData(CPODData const&,CPODData&,uint,bool)
 *
 * Callers: 1
 *   0x00000000002011F0  PVRTModelPODCopyCPODData(CPODData const&,CPODData&,uint,bool)
 *
 * Callees: 3
 *   0x00000000001F6770  .calloc
 *   0x00000000001F89E0  .free
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 16
 *   insn=0x000000000050F204 string=0x000000000050F214 "h"
 *   insn=0x000000000050F20C string=0x00000000001F89E0 "0'"
 *   insn=0x000000000050F218 string=0x000000000050F21C "`B@"
 *   insn=0x000000000050F220 string=0x000000000050F224 "a\n@"
 *   insn=0x000000000050F224 string=0x000000000050F228 "v"
 *   insn=0x000000000050F234 string=0x000000000050F238 ""
 *   insn=0x000000000050F240 string=0x000000000050F244 "i"
 *   insn=0x000000000050F244 string=0x000000000050F24C "("
 *   insn=0x000000000050F250 string=0x000000000050F258 "\t"
 *   insn=0x000000000050F258 string=0x000000000050F25C ")}"
 *   insn=0x000000000050F25C string=0x000000000050F260 "5}"
 *   insn=0x000000000050F26C string=0x000000000050F270 "@"
 *   insn=0x000000000050F270 string=0x00000000001F6770 "0'"
 *   insn=0x000000000050F274 string=0x000000000050F278 "`"
 *   insn=0x000000000050F278 string=0x000000000050F27C "a\n@"
 *   insn=0x000000000050F2A4 string=0x000000000050F2A8 "."
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall PVRTModelPODCopyCPODData(const CPODData *a1, CPODData *a2, unsigned int a3, char a4)
{
  int v8; // w8
  __int64 v9; // d0
  const void *v10; // x1
  unsigned int v11; // w8
  __int64 v12; // x8
  unsigned __int64 v13; // x9
  size_t v14; // x21
  void *v15; // x0

  if ( *((_QWORD *)a2 + 2) )
  {
    free(*((void **)a2 + 2));
    *((_QWORD *)a2 + 2) = 0;
  }
  v8 = *(_DWORD *)a1;
  *(_DWORD *)a2 = *(_DWORD *)a1;
  v9 = *(_QWORD *)((char *)a1 + 4);
  *(_QWORD *)((char *)a2 + 4) = v9;
  v10 = (const void *)*((_QWORD *)a1 + 2);
  if ( (a4 & 1) != 0 )
  {
    *((_QWORD *)a2 + 2) = v10;
    return;
  }
  if ( v10 )
  {
    v11 = v8 - 1;
    if ( v11 > 0xD )
      v12 = 0;
    else
      v12 = qword_59B8A0[v11];
    v13 = (unsigned int)v9 * (unsigned __int64)a3;
    v14 = v13 * v12;
    if ( !(v13 * v12) )
    {
      v15 = 0;
      goto LABEL_14;
    }
    v15 = calloc(v13 * v12, 1u);
    *((_QWORD *)a2 + 2) = v15;
    if ( v15 )
    {
      v10 = (const void *)*((_QWORD *)a1 + 2);
LABEL_14:
      memcpy(v15, v10, v14);
    }
  }
}

