/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000504E44
 * Mangled: _Z23PVRTModelPODCopyTextureRK11SPODTextureRS_
 * Demangled: PVRTModelPODCopyTexture(SPODTexture const&,SPODTexture&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F6770  .calloc
 *   0x0000000000201760  .memcpy
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 4
 *   insn=0x0000000000504E74 string=0x0000000000504E78 ">"
 *   insn=0x0000000000504E78 string=0x00000000001F6770 "0'"
 *   insn=0x0000000000504E80 string=0x0000000000504E84 "u"
 *   insn=0x0000000000504EC0 string=0x0000000000504EC4 "'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const char **__fastcall PVRTModelPODCopyTexture(const char **result, void **a2)
{
  const char **v2; // x20
  const char *v3; // x19
  size_t v5; // x0
  void *v6; // x21
  size_t v7; // x0

  v2 = result;
  v3 = *result;
  if ( *result )
  {
    v5 = strlen(*result) + 1;
    if ( !v5 )
    {
      v6 = *a2;
      goto LABEL_7;
    }
    result = (const char **)calloc(v5, 1u);
    v6 = result;
    *a2 = result;
    if ( result )
    {
      v3 = *v2;
LABEL_7:
      v7 = strlen(v3);
      return (const char **)memcpy(v6, v3, v7 + 1);
    }
  }
  return result;
}

