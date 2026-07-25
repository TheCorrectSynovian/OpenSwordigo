/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002815E0
 * Mangled: _ZN5Caver24PhysicsPlatformComponent21HandleObjectCollisionERKNS_20CollisionMessageDataE
 * Demangled: Caver::PhysicsPlatformComponent::HandleObjectCollision(Caver::CollisionMessageData const&)
 *
 * Callers: 1
 *   0x00000000001FB050  Caver::PhysicsPlatformComponent::HandleObjectCollision(Caver::CollisionMessageData const&)
 *
 * Callees: 0
 *
 * Referenced strings: 42
 *   insn=0x00000000002815E0 string=0x00000000002815E4 " ,@"
 *   insn=0x00000000002815EC string=0x00000000002815F0 "e\t"
 *   insn=0x00000000002815F0 string=0x00000000002815F4 "("
 *   insn=0x00000000002815F4 string=0x00000000002815F8 """
 *   insn=0x00000000002815FC string=0x0000000000281600 "!(@"
 *   insn=0x0000000000281600 string=0x0000000000281604 ""
 *   insn=0x0000000000281604 string=0x0000000000281608 "%0@"
 *   insn=0x0000000000281604 string=0x0000000000583944 "\n"
 *   insn=0x000000000028160C string=0x0000000000281610 "B$"
 *   insn=0x0000000000281610 string=0x0000000000281614 "c$"
 *   insn=0x0000000000281614 string=0x0000000000281618 "B!"
 *   insn=0x0000000000281618 string=0x000000000028161C "c "
 *   insn=0x000000000028161C string=0x0000000000281620 "B(#"
 *   insn=0x0000000000281624 string=0x0000000000281628 "@ #"
 *   insn=0x000000000028162C string=0x0000000000281630 ""
 *   insn=0x0000000000281638 string=0x000000000028163C "@ #"
 *   insn=0x000000000028163C string=0x0000000000281640 "m"
 *   insn=0x0000000000281640 string=0x000000000028164C "p@"
 *   insn=0x0000000000281658 string=0x000000000028165C ""
 *   insn=0x0000000000281658 string=0x0000000000281694 "("
 *   insn=0x000000000028165C string=0x0000000000281660 "("
 *   insn=0x000000000028166C string=0x0000000000281670 "!""
 *   insn=0x0000000000281670 string=0x0000000000281674 " 8 "
 *   insn=0x0000000000281678 string=0x000000000028167C "!%"
 *   insn=0x0000000000281680 string=0x0000000000281684 "!(#"
 *   insn=0x00000000002816A0 string=0x00000000002816A4 "!""
 *   insn=0x00000000002816A4 string=0x00000000002816A8 " 8 "
 *   insn=0x00000000002816AC string=0x00000000002816B0 "!%"
 *   insn=0x00000000002816B4 string=0x00000000002816B8 "!(#"
 *   insn=0x00000000002816C0 string=0x00000000002816C4 "("
 *   insn=0x00000000002816C4 string=0x00000000002816C8 "\n"
 *   insn=0x00000000002816C8 string=0x00000000002816CC ")"
 *   insn=0x00000000002816CC string=0x00000000002816D0 ""yI"
 *   insn=0x00000000002816D0 string=0x00000000002816D4 ""
 *   insn=0x00000000002816D8 string=0x00000000002816DC "E"
 *   insn=0x00000000002816DC string=0x00000000002816E0 "D"
 *   insn=0x00000000002816E0 string=0x00000000002816E4 "AN-b""
 *   insn=0x00000000002816E4 string=0x00000000002816E8 "b""
 *   insn=0x00000000002816E8 string=0x00000000002816EC "B$"
 *   insn=0x0000000000281700 string=0x0000000000281704 "!$"
 *   insn=0x000000000028170C string=0x0000000000281710 "  "
 *   insn=0x0000000000281710 string=0x0000000000281714 "`( "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::PhysicsPlatformComponent::HandleObjectCollision(__int64 a1, __int64 a2)
{
  float result; // s0
  float v3; // s1
  int v4; // w8
  float v5; // s0
  float v6; // s1
  float v7; // s0
  float v8; // s1
  float v9; // s0

  result = *(float *)(a2 + 44);
  if ( result < -0.2 )
  {
    v3 = *(float *)(a2 + 40);
    if ( (float)((float)((float)(*(float *)(a2 + 32) * -0.016667) * v3)
               + (float)((float)(*(float *)(a2 + 36) * -0.016667) * result)) <= (float)(*(float *)(a2 + 48) + 0.01) )
    {
      if ( *(float *)(a1 + 124) > 0.0001 )
      {
        *(_DWORD *)(a1 + 128) = 0;
        *(_DWORD *)(a1 + 116) = 0;
        *(_DWORD *)(a1 + 120) = 0;
      }
      v4 = *(_DWORD *)(a1 + 112);
      *(_DWORD *)(a1 + 124) = 0;
      if ( v4 == 1 )
      {
        v7 = (float)(v3 * 0.0) - result;
        v8 = (float)((float)(v7 * 0.0) * 2000.0) + *(float *)(a1 + 116);
        v9 = *(float *)(a1 + 120) - (float)(v7 * 2000.0);
        *(float *)(a1 + 116) = v8;
        *(float *)(a1 + 120) = v9;
        result = *(float *)(a1 + 128)
               + (float)((float)(1.0
                               / (float)((float)(*(float *)(a1 + 148) * 1000.0)
                                       * *(float *)(*(_QWORD *)(a1 + 40) + 156LL)))
                       * (float)((float)(v9
                                       * (float)(*(float *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 40LL) + 112LL)
                                               - *(float *)(*(_QWORD *)(a1 + 40) + 112LL)))
                               - (float)(v8
                                       * (float)(*(float *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 40LL) + 116LL)
                                               - *(float *)(*(_QWORD *)(a1 + 40) + 116LL)))));
        *(float *)(a1 + 128) = result;
      }
      else if ( !v4 )
      {
        v5 = (float)(v3 * 0.0) - result;
        v6 = (float)((float)(v5 * 0.0) * 2000.0) + *(float *)(a1 + 116);
        result = *(float *)(a1 + 120) - (float)(v5 * 2000.0);
        *(float *)(a1 + 116) = v6;
        *(float *)(a1 + 120) = result;
      }
    }
  }
  return result;
}

