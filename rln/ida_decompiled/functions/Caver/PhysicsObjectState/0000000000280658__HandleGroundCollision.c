/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000280658
 * Mangled: _ZN5Caver18PhysicsObjectState21HandleGroundCollisionERKNS_20CollisionMessageDataE
 * Demangled: Caver::PhysicsObjectState::HandleGroundCollision(Caver::CollisionMessageData const&)
 *
 * Callers: 1
 *   0x00000000001FE040  Caver::PhysicsObjectState::HandleGroundCollision(Caver::CollisionMessageData const&)
 *
 * Callees: 1
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *
 * Referenced strings: 84
 *   insn=0x000000000028066C string=0x0000000000280670 "h"
 *   insn=0x0000000000280674 string=0x0000000000280678 "H"
 *   insn=0x0000000000280678 string=0x000000000028067C "I"
 *   insn=0x000000000028067C string=0x0000000000280680 "#"
 *   insn=0x000000000028068C string=0x0000000000280690 "\t"
 *   insn=0x0000000000280690 string=0x0000000000280694 ""EI"
 *   insn=0x0000000000280690 string=0x0000000000583944 "\n"
 *   insn=0x00000000002806AC string=0x00000000002806B0 "e(""
 *   insn=0x00000000002806B4 string=0x00000000002806B8 "L"
 *   insn=0x00000000002806B8 string=0x00000000002806BC "\t"
 *   insn=0x00000000002806BC string=0x00000000002806C0 "d\n@"
 *   insn=0x00000000002806BC string=0x0000000000583734 "o"
 *   insn=0x00000000002806C0 string=0x00000000002806C4 "(5G"
 *   insn=0x00000000002806CC string=0x00000000002806D0 "d"
 *   insn=0x00000000002806CC string=0x000000000028076C "u"
 *   insn=0x00000000002806D0 string=0x00000000002806D4 "\t"
 *   insn=0x00000000002806D4 string=0x00000000002806D8 "'"
 *   insn=0x00000000002806D4 string=0x00000000005837A4 "o"
 *   insn=0x00000000002806EC string=0x00000000002806F0 ")"
 *   insn=0x00000000002806F0 string=0x00000000002806F4 "'AO"
 *   insn=0x00000000002806F0 string=0x0000000000587F40 "33s"
 *   insn=0x00000000002806FC string=0x0000000000280700 "%"
 *   insn=0x0000000000280704 string=0x0000000000280708 ":'"
 *   insn=0x0000000000280714 string=0x0000000000280718 "2"
 *   insn=0x000000000028071C string=0x0000000000280720 "$N$"
 *   insn=0x0000000000280720 string=0x0000000000280724 "@"("
 *   insn=0x0000000000280728 string=0x000000000028072C ""
 *   insn=0x0000000000280730 string=0x0000000000280734 "&@!"
 *   insn=0x0000000000280740 string=0x0000000000280744 "'8'"
 *   insn=0x000000000028075C string=0x0000000000280760 ""
 *   insn=0x000000000028076C string=0x0000000000280770 "dz@"
 *   insn=0x0000000000280770 string=0x0000000000280774 ")"
 *   insn=0x0000000000280774 string=0x0000000000280778 "*"
 *   insn=0x0000000000280778 string=0x000000000028077C "%"
 *   insn=0x0000000000280778 string=0x0000000000584430 "333?"
 *   insn=0x000000000028077C string=0x0000000000280780 "I1D"
 *   insn=0x000000000028078C string=0x0000000000280790 "  )"
 *   insn=0x0000000000280790 string=0x0000000000280794 "i"
 *   insn=0x00000000002807B4 string=0x00000000002807B8 "#@!"
 *   insn=0x00000000002807C4 string=0x00000000002807E0 "E "
 *   insn=0x00000000002807CC string=0x00000000002807D0 "%qA"
 *   insn=0x00000000002807E0 string=0x00000000002807E4 "B!"
 *   insn=0x00000000002807EC string=0x00000000002807F0 "c(%"
 *   insn=0x00000000002807FC string=0x0000000000280800 ""
 *   insn=0x0000000000280814 string=0x0000000000280818 "!&"
 *   insn=0x0000000000280820 string=0x0000000000280824 "!(""
 *   insn=0x0000000000280828 string=0x000000000028082C ""8""
 *   insn=0x000000000028082C string=0x0000000000280830 "B"
 *   insn=0x0000000000280830 string=0x0000000000280834 "@ #"
 *   insn=0x0000000000280834 string=0x0000000000280838 "\t"
 *   insn=0x0000000000280848 string=0x000000000028084C "U"
 *   insn=0x000000000028084C string=0x00000000001F5DA0 "P'"
 *   insn=0x0000000000280858 string=0x000000000028085C "\t!F9if"
 *   insn=0x000000000028085C string=0x0000000000280860 "if"
 *   insn=0x0000000000280860 string=0x0000000000280864 "\t"
 *   insn=0x0000000000280864 string=0x0000000000280868 "\t"
 *   insn=0x0000000000280868 string=0x000000000028086C ""
 *   insn=0x0000000000280868 string=0x00000000002808A8 "a\n@"
 *   insn=0x0000000000280870 string=0x0000000000280874 "\t\t@"
 *   insn=0x0000000000280870 string=0x0000000000280880 "`"
 *   insn=0x0000000000280874 string=0x0000000000280878 ")"
 *   insn=0x0000000000280878 string=0x000000000028087C "\t\t"
 *   insn=0x0000000000280880 string=0x0000000000280884 "h"
 *   insn=0x0000000000280888 string=0x000000000028088C "@"
 *   insn=0x000000000028088C string=0x0000000000280890 ""
 *   insn=0x0000000000280890 string=0x0000000000280894 ""
 *   insn=0x0000000000280898 string=0x000000000028089C ""
 *   insn=0x000000000028089C string=0x00000000002808A0 ""
 *   insn=0x00000000002808AC string=0x00000000002808B0 "  ("
 *   insn=0x00000000002808B4 string=0x00000000002808B8 "a"
 *   insn=0x00000000002808C0 string=0x00000000002808F8 "  "
 *   insn=0x00000000002808CC string=0x00000000002808D0 ""
 *   insn=0x00000000002808D0 string=0x00000000002808D4 "ib"
 *   insn=0x00000000002808D8 string=0x00000000002808DC "h2"
 *   insn=0x00000000002808DC string=0x00000000002808E0 "D"
 *   insn=0x00000000002808E8 string=0x00000000002808EC "`"
 *   insn=0x00000000002808EC string=0x00000000002808F0 "h"
 *   insn=0x00000000002808F8 string=0x00000000002808FC "-"
 *   insn=0x00000000002808FC string=0x0000000000280900 "h"
 *   insn=0x0000000000280908 string=0x000000000028090C "!!"
 *   insn=0x0000000000280914 string=0x0000000000280918 "E"
 *   insn=0x0000000000280920 string=0x0000000000280924 "!!"
 *   insn=0x0000000000280930 string=0x0000000000280934 ") "
 *   insn=0x0000000000280934 string=0x0000000000280938 "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float *__fastcall Caver::PhysicsObjectState::HandleGroundCollision(float *result, __int64 a2)
{
  float *v2; // x19
  float v4; // s0
  float v5; // s1
  float v6; // w8
  float v7; // s4
  float v8; // s5
  float v9; // s6
  float v10; // s18
  float v11; // s6
  float v12; // s7
  float v13; // s6
  __int64 v14; // x21
  float v15; // s6
  float v16; // s7
  float v17; // s5
  float v18; // s16
  float v19; // s5
  float v20; // s4
  float v21; // s2
  float v22; // s3
  float v23; // s4
  float v24; // s2
  float v25; // s5
  float v26; // s0
  float v27; // s1
  int v28; // w8
  __int64 v29; // x8
  __int64 v30; // x8
  int v31; // w8
  float v32; // s0
  int v33; // w8
  int v34; // w8
  __int64 v35; // x8

  v2 = result;
  if ( *((_BYTE *)result + 116) )
  {
    v4 = *(float *)(a2 + 40);
    v5 = *(float *)(a2 + 44);
    v6 = *(float *)(a2 + 48);
    if ( (float)((float)((float)(*(float *)(a2 + 24) * 0.016667) * v4)
               + (float)((float)(*(float *)(a2 + 28) * 0.016667) * v5)) <= (float)(v6 + 0.01) )
    {
      if ( result[2] <= 0.001 )
      {
        v7 = result[4];
        v8 = result[5];
        v9 = (float)(v7 * v4) + (float)(v8 * v5);
        if ( v9 <= -0.001 && v9 >= -0.95 )
        {
          v10 = fabsf(v5);
          if ( (float)((float)(v7 * v5) - (float)(v4 * v8)) < 0.0 )
            v7 = -v7;
          else
            v8 = -v8;
          v11 = v8;
          v12 = *(float *)(a2 + 40);
          if ( v10 >= 0.001 )
          {
            v13 = v4 / (float)-v5;
            v12 = v5 - (float)(v13 * v4);
            v11 = v7 - (float)(v13 * v8);
          }
          if ( fabsf(v11) >= 0.001 )
          {
            v6 = (float)(v12 * v6) / v11;
            v4 = v8;
            v5 = v7;
          }
        }
      }
      v14 = *(_QWORD *)result;
      v15 = *(float *)(*(_QWORD *)result + 104LL);
      v16 = *(float *)(*(_QWORD *)result + 108LL);
      v17 = fminf(-result[30], -0.1);
      if ( v5 >= 0.7 )
        v17 = -result[30];
      v18 = (float)(v15 * v4) + (float)(v16 * v5);
      v19 = v17 * v18;
      v20 = (float)(v16 * v4) - (float)(v15 * v5);
      if ( v18 >= 0.01 )
        v21 = (float)(v15 * v4) + (float)(v16 * v5);
      else
        v21 = v19;
      if ( *((_BYTE *)result + 117) )
        *(float *)(v14 + 132) = v20 / (float)(*(float *)(*(_QWORD *)a2 + 368LL) * 0.5);
      v22 = (float)(v20 * (float)-v5) + (float)(v21 * v4);
      v23 = (float)(v20 * v4) + (float)(v21 * v5);
      v25 = *(float *)(v14 + 112);
      v24 = *(float *)(v14 + 116);
      *(float *)(v14 + 104) = v22;
      *(float *)(v14 + 108) = v23;
      v26 = (float)(v4 * v6) + v25;
      v27 = (float)(v5 * v6) + v24;
      if ( fabsf(v26 - v25) > 0.0001 || fabsf(v27 - v24) > 0.0001 )
      {
        v28 = *(unsigned __int8 *)(v14 + 180);
        *(float *)(v14 + 112) = v26;
        *(float *)(v14 + 116) = v27;
        if ( !v28 )
        {
          result = (float *)Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v14);
          *(_BYTE *)(v14 + 180) = 1;
        }
      }
      v29 = *(_QWORD *)(a2 + 8);
      *((_BYTE *)v2 + 25) = *(_BYTE *)(v29 + 392);
      if ( *(_BYTE *)(v29 + 378) )
      {
        v30 = *(_QWORD *)(v29 + 40);
        if ( v30 )
          ++*(_DWORD *)(v30 + 8);
        result = (float *)*((_QWORD *)v2 + 4);
        *((_QWORD *)v2 + 4) = v30;
        if ( result )
        {
          v31 = *((_DWORD *)result + 2) - 1;
          *((_DWORD *)result + 2) = v31;
          if ( !v31 )
            result = (float *)(*(__int64 (__fastcall **)(float *))(*(_QWORD *)result + 8LL))(result);
        }
      }
      v32 = *(float *)(a2 + 44);
      if ( v2[2] > 0.001 || v32 > v2[5] )
      {
        v33 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 388LL);
        *((_BYTE *)v2 + 24) = v32 < 0.7;
        v2[2] = 0.0;
        *((_DWORD *)v2 + 12) = v33;
        if ( v32 >= 0.7 )
          v2[3] = 0.0;
        v34 = *(_DWORD *)(a2 + 40);
        v2[5] = v32;
        *((_DWORD *)v2 + 4) = v34;
        v32 = *(float *)(a2 + 44);
      }
      if ( v32 > 0.0 )
      {
        v35 = *(_QWORD *)v2;
        if ( (float)((float)(*(float *)(*(_QWORD *)v2 + 104LL) * *(float *)(*(_QWORD *)v2 + 104LL))
                   + (float)(*(float *)(*(_QWORD *)v2 + 108LL) * *(float *)(*(_QWORD *)v2 + 108LL))) < 0.001
          && (float)((float)(*(float *)(a2 + 32) * *(float *)(a2 + 32))
                   + (float)(*(float *)(a2 + 36) * *(float *)(a2 + 36))) < 0.001 )
        {
          *((_WORD *)v2 + 50) = 257;
          *(_QWORD *)(v35 + 104) = 0;
        }
      }
    }
  }
  return result;
}

