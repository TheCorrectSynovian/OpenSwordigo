/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000050612C
 * Mangled: _ZNK13CPVRTModelPOD17GetLightDirectionEj
 * Demangled: CPVRTModelPOD::GetLightDirection(uint)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8480  CPVRTModelPOD::GetWorldMatrixNoCache(PVRTMATRIXf &,SPODNode const&)
 *
 * Referenced strings: 24
 *   insn=0x000000000050613C string=0x0000000000506140 "T"
 *   insn=0x000000000050614C string=0x0000000000506150 "hB@"
 *   insn=0x0000000000506150 string=0x0000000000506154 "iN@"
 *   insn=0x0000000000506158 string=0x000000000050615C "5"
 *   insn=0x000000000050615C string=0x0000000000506160 "  "
 *   insn=0x0000000000506160 string=0x0000000000506164 "a"
 *   insn=0x0000000000506164 string=0x0000000000506168 ""
 *   insn=0x0000000000506164 string=0x0000000000506170 "\t\t@"
 *   insn=0x000000000050616C string=0x0000000000506184 ""
 *   insn=0x0000000000506170 string=0x0000000000506174 "!yu"
 *   insn=0x0000000000506178 string=0x000000000050617C "A"
 *   insn=0x000000000050617C string=0x0000000000506180 "@"
 *   insn=0x000000000050617C string=0x00000000005061E4 "h*@"
 *   insn=0x00000000005061BC string=0x0000000000506238 "&"
 *   insn=0x00000000005061CC string=0x00000000005061D0 "!@!"
 *   insn=0x00000000005061D0 string=0x00000000005061D4 "B@!"
 *   insn=0x00000000005061F8 string=0x00000000005061FC "hB@"
 *   insn=0x00000000005061F8 string=0x00000000001F8480 "0'"
 *   insn=0x00000000005061FC string=0x0000000000506200 "\t"
 *   insn=0x0000000000506200 string=0x0000000000506204 "\n\t@"
 *   insn=0x0000000000506204 string=0x0000000000506208 "Iy5"
 *   insn=0x0000000000506208 string=0x000000000050620C "@"
 *   insn=0x0000000000506210 string=0x0000000000506214 ""
 *   insn=0x0000000000506238 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall CPVRTModelPOD::GetLightDirection(CPVRTModelPOD *this, int a2)
{
  __int64 v3; // x8
  __int64 v4; // x21
  __int64 v5; // x8
  __int64 v7; // x8
  _OWORD *v8; // x8
  __int128 v9; // [xsp+0h] [xbp-70h]
  __int128 v10; // [xsp+10h] [xbp-60h]
  __int128 v11; // [xsp+20h] [xbp-50h]
  __int128 v12; // [xsp+30h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  v3 = *((_QWORD *)this + 16);
  v4 = (unsigned int)(*((_DWORD *)this + 19) + a2);
  if ( *(float *)v3 == 0.0 )
  {
    v5 = *(_QWORD *)(v3 + 32);
  }
  else
  {
    if ( *(float *)v3 != *(float *)(*(_QWORD *)(v3 + 16) + 4 * v4) )
    {
      CPVRTModelPOD::GetWorldMatrixNoCache();
      v7 = *((_QWORD *)this + 16);
      *(_DWORD *)(*(_QWORD *)(v7 + 16) + 4 * v4) = *(_DWORD *)v7;
      v8 = (_OWORD *)(*(_QWORD *)(v7 + 24) + (v4 << 6));
      v8[3] = v12;
      v8[2] = v11;
      v8[1] = v10;
      *v8 = v9;
      return -*(float *)&v10;
    }
    v5 = *(_QWORD *)(v3 + 24);
  }
  v10 = *(_OWORD *)(v5 + (v4 << 6) + 16);
  return -*(float *)&v10;
}

