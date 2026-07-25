/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000212DF0
 * Mangled: _ZN5Caver12AnimKeysNode17InitWithAnimationERKN5boost10shared_ptrIKNS_17KeyframeAnimationEEE
 * Demangled: Caver::AnimKeysNode::InitWithAnimation(boost::shared_ptr<Caver::KeyframeAnimation const> const&)
 *
 * Callers: 1
 *   0x00000000001FF940  Caver::AnimKeysNode::InitWithAnimation(boost::shared_ptr<Caver::KeyframeAnimation const> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x0000000000212DF8 string=0x0000000000212DFC ") @"
 *   insn=0x0000000000212E04 string=0x0000000000212E08 "\n"
 *   insn=0x0000000000212E04 string=0x0000000000212E14 "t"
 *   insn=0x0000000000212E08 string=0x0000000000212E0C "J"
 *   insn=0x0000000000212E0C string=0x0000000000212E10 "\n"
 *   insn=0x0000000000212E14 string=0x0000000000212E18 "i"
 *   insn=0x0000000000212E1C string=0x0000000000212E50 "h"
 *   insn=0x0000000000212E20 string=0x0000000000212E24 ""
 *   insn=0x0000000000212E28 string=0x0000000000212E2C "!"
 *   insn=0x0000000000212E34 string=0x0000000000212E38 "\t@"
 *   insn=0x0000000000212E40 string=0x0000000000212E44 ""
 *   insn=0x0000000000212E48 string=0x0000000000212E4C "`"
 *   insn=0x0000000000212E5C string=0x00000000005837A4 "o"
 *   insn=0x0000000000212E64 string=0x0000000000212E68 "`*"
 *   insn=0x0000000000212E7C string=0x0000000000212E80 "@"
 *   insn=0x0000000000212E84 string=0x0000000000212E88 "h"
 *   insn=0x0000000000212E88 string=0x0000000000212E8C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AnimKeysNode::InitWithAnimation(__int64 result, __int64 *a2)
{
  __int64 v2; // x8
  __int64 v3; // x9
  __int64 v4; // x19
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8

  v3 = *a2;
  v2 = a2[1];
  v4 = result;
  if ( v2 )
    ++*(_QWORD *)(v2 + 8);
  v5 = *(_QWORD **)(result + 32);
  *(_QWORD *)(result + 24) = v3;
  *(_QWORD *)(result + 32) = v2;
  if ( !v5
    || (v6 = v5[1] - 1LL, (v5[1] = v6) != 0)
    || (result = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5), v7 = v5[2] - 1LL, (v5[2] = v7) != 0) )
  {
    v8 = *(_QWORD *)(v4 + 24);
    if ( !v8 )
      return result;
  }
  else
  {
    result = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    v8 = *(_QWORD *)(v4 + 24);
    if ( !v8 )
      return result;
  }
  *(float *)(v4 + 40) = *(float *)(v8 + 32) + -0.001;
  return result;
}

