/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000504DB0
 * Mangled: _Z22PVRTModelPODCopyCameraRK10SPODCameraRS_i
 * Demangled: PVRTModelPODCopyCamera(SPODCamera const&,SPODCamera&,int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F6770  .calloc
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 6
 *   insn=0x0000000000504DD4 string=0x0000000000504DD8 "A"
 *   insn=0x0000000000504DD8 string=0x0000000000504DDC "S|~"
 *   insn=0x0000000000504DE8 string=0x0000000000504DEC "a"
 *   insn=0x0000000000504DEC string=0x00000000001F6770 "0'"
 *   insn=0x0000000000504DF0 string=0x0000000000504DF4 "`"
 *   insn=0x0000000000504E20 string=0x0000000000504E24 "O"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall PVRTModelPODCopyCamera(_QWORD *result, __int64 a2, int a3)
{
  _QWORD *v3; // x20
  __int128 v4; // q0
  const void *v6; // x1
  size_t v7; // x19

  v3 = result;
  v4 = *(_OWORD *)result;
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)a2 = v4;
  v6 = (const void *)result[2];
  if ( v6 )
  {
    v7 = 4LL * a3;
    if ( !a3 )
    {
      result = 0;
      return memcpy(result, v6, v7);
    }
    result = calloc(4LL * a3, 4u);
    *(_QWORD *)(a2 + 16) = result;
    if ( result )
    {
      v6 = (const void *)v3[2];
      return memcpy(result, v6, v7);
    }
  }
  return result;
}

