/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000504EC8
 * Mangled: _Z24PVRTModelPODCopyMaterialRK12SPODMaterialRS_
 * Demangled: PVRTModelPODCopyMaterial(SPODMaterial const&,SPODMaterial&)
 *
 * Callers: 1
 *   0x00000000001F7BD0  PVRTModelPODCopyMaterial(SPODMaterial const&,SPODMaterial&)
 *
 * Callees: 3
 *   0x00000000001F6770  .calloc
 *   0x0000000000201760  .memcpy
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 13
 *   insn=0x0000000000504F00 string=0x0000000000504F04 "u"
 *   insn=0x0000000000504F04 string=0x0000000000504F08 "u"
 *   insn=0x0000000000504F08 string=0x0000000000504F54 "u2@"
 *   insn=0x0000000000504F20 string=0x00000000001F6770 "0'"
 *   insn=0x0000000000504F28 string=0x0000000000504F2C "V"
 *   insn=0x0000000000504F2C string=0x0000000000504F30 "u"
 *   insn=0x0000000000504F54 string=0x0000000000504F58 "u"
 *   insn=0x0000000000504F58 string=0x0000000000504FA4 "u6@"
 *   insn=0x0000000000504F78 string=0x0000000000504F7C "V"
 *   insn=0x0000000000504F7C string=0x0000000000504F80 "u2@"
 *   insn=0x0000000000504FC8 string=0x0000000000504FCC "v"
 *   insn=0x0000000000504FCC string=0x0000000000504FD0 "u6@"
 *   insn=0x0000000000504FD0 string=0x0000000000504FD4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall PVRTModelPODCopyMaterial(const char **a1, _QWORD *a2)
{
  void *result; // x0
  const char *v5; // x21
  size_t v6; // x0
  void *v7; // x22
  size_t v8; // x0
  const char *v9; // x21
  size_t v10; // x0
  void *v11; // x22
  size_t v12; // x0
  const char *v13; // x21
  size_t v14; // x0
  void *v15; // x22
  size_t v16; // x2

  result = memcpy(a2, a1, 0xB0u);
  *a2 = 0;
  a2[12] = 0;
  a2[13] = 0;
  v5 = *a1;
  if ( *a1 )
  {
    v6 = strlen(*a1) + 1;
    if ( v6 )
    {
      result = calloc(v6, 1u);
      v7 = result;
      *a2 = result;
      if ( !result )
        goto LABEL_7;
      v5 = *a1;
    }
    else
    {
      v7 = 0;
    }
    v8 = strlen(v5);
    result = memcpy(v7, v5, v8 + 1);
  }
LABEL_7:
  v9 = a1[12];
  if ( !v9 )
    goto LABEL_13;
  v10 = strlen(a1[12]) + 1;
  if ( v10 )
  {
    result = calloc(v10, 1u);
    v11 = result;
    a2[12] = result;
    if ( !result )
      goto LABEL_13;
    v9 = a1[12];
  }
  else
  {
    v11 = 0;
  }
  v12 = strlen(v9);
  result = memcpy(v11, v9, v12 + 1);
LABEL_13:
  v13 = a1[13];
  if ( v13 )
  {
    v14 = strlen(a1[13]) + 1;
    if ( !v14 )
    {
      v15 = 0;
      goto LABEL_19;
    }
    result = calloc(v14, 1u);
    v15 = result;
    a2[13] = result;
    if ( result )
    {
      v13 = a1[13];
LABEL_19:
      v16 = strlen(v13) + 1;
      return memcpy(v15, v13, v16);
    }
  }
  return result;
}

