/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000506028
 * Mangled: _ZNK13CPVRTModelPOD16GetLightPositionEj
 * Demangled: CPVRTModelPOD::GetLightPosition(uint)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8480  CPVRTModelPOD::GetWorldMatrixNoCache(PVRTMATRIXf &,SPODNode const&)
 *
 * Referenced strings: 21
 *   insn=0x0000000000506038 string=0x000000000050603C "T"
 *   insn=0x0000000000506048 string=0x000000000050604C "hB@"
 *   insn=0x000000000050604C string=0x0000000000506050 "iN@"
 *   insn=0x0000000000506054 string=0x0000000000506058 "5"
 *   insn=0x0000000000506058 string=0x000000000050605C "  "
 *   insn=0x000000000050605C string=0x0000000000506060 "a"
 *   insn=0x0000000000506060 string=0x0000000000506064 ""
 *   insn=0x0000000000506060 string=0x000000000050606C "\t\t@"
 *   insn=0x0000000000506068 string=0x0000000000506080 ""
 *   insn=0x000000000050606C string=0x0000000000506070 "!yu"
 *   insn=0x0000000000506078 string=0x000000000050607C "@"
 *   insn=0x0000000000506078 string=0x00000000005060D4 "h*@"
 *   insn=0x00000000005060B8 string=0x0000000000506128 "j"
 *   insn=0x00000000005060E8 string=0x00000000005060EC "hB@"
 *   insn=0x00000000005060E8 string=0x00000000001F8480 "0'"
 *   insn=0x00000000005060EC string=0x00000000005060F0 "\t"
 *   insn=0x00000000005060F0 string=0x00000000005060F4 "\n\t@"
 *   insn=0x00000000005060F4 string=0x00000000005060F8 "Iy5"
 *   insn=0x00000000005060F8 string=0x00000000005060FC "@"
 *   insn=0x0000000000506100 string=0x0000000000506104 ""
 *   insn=0x0000000000506128 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall CPVRTModelPOD::GetLightPosition(CPVRTModelPOD *this, int a2)
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
      return *(float *)&v12;
    }
    v5 = *(_QWORD *)(v3 + 24);
  }
  v12 = *(_OWORD *)(v5 + (v4 << 6) + 48);
  return *(float *)&v12;
}

