/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029E128
 * Mangled: _ZN5Caver32SkellyMonsterControllerComponent6UpdateEf
 * Demangled: Caver::SkellyMonsterControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001F3EF0  Caver::SkellyMonsterControllerComponent::Update(float)
 *
 * Callees: 8
 *   0x00000000001F39A0  Caver::CharControllerComponent::StartMovingToDirection(int)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FBEF0  Caver::MonsterControllerComponent::FindNearestEnemy(void)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x00000000001FCF30  Caver::CharControllerComponent::Swing(void)
 *   0x00000000001FD020  Caver::EntityComponent::SetFacingDirection(int)
 *   0x00000000001FFC30  Caver::CharControllerComponent::StartJumping(void)
 *   0x0000000000202030  Caver::ShapeComponent::ContainsWorldPoint(Caver::Vector2 const&)
 *
 * Referenced strings: 156
 *   insn=0x000000000029E140 string=0x000000000029E144 "hB@"
 *   insn=0x000000000029E144 string=0x000000000029E148 ""
 *   insn=0x000000000029E14C string=0x000000000029E150 "`"
 *   insn=0x000000000029E14C string=0x000000000029E164 "hr@"
 *   insn=0x000000000029E154 string=0x000000000029E158 "bf"
 *   insn=0x000000000029E158 string=0x000000000029E15C "hB@"
 *   insn=0x000000000029E158 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000029E15C string=0x000000000029E160 "(%"
 *   insn=0x000000000029E168 string=0x000000000029E16C "`B"
 *   insn=0x000000000029E170 string=0x000000000029E174 "[f"
 *   insn=0x000000000029E174 string=0x000000000029E178 "hr@"
 *   insn=0x000000000029E178 string=0x000000000029E17C "H$"
 *   insn=0x000000000029E180 string=0x000000000029E184 "[w"
 *   insn=0x000000000029E184 string=0x000000000029E188 "hBD9"
 *   insn=0x000000000029E184 string=0x00000000001FBEF0 "0'"
 *   insn=0x000000000029E190 string=0x000000000029E1E4 "!"
 *   insn=0x000000000029E194 string=0x000000000029E198 "`~@"
 *   insn=0x000000000029E19C string=0x000000000029E1A0 "`"
 *   insn=0x000000000029E1A4 string=0x000000000029E1A8 "Nf"
 *   insn=0x000000000029E1A8 string=0x000000000029E1AC "`~@"
 *   insn=0x000000000029E1B0 string=0x000000000029E1E0 "hBD9!"
 *   insn=0x000000000029E1B8 string=0x000000000029E1BC " "
 *   insn=0x000000000029E1BC string=0x000000000029E1C0 "`r@"
 *   insn=0x000000000029E1C8 string=0x000000000029E1CC "`B"
 *   insn=0x000000000029E1D0 string=0x000000000029E1D4 "Cf"
 *   insn=0x000000000029E1D4 string=0x000000000029E1D8 "`r@"
 *   insn=0x000000000029E1E8 string=0x000000000029E1EC "i"
 *   insn=0x000000000029E1E8 string=0x000000000029E564 "H"
 *   insn=0x000000000029E1F0 string=0x000000000029E1F4 "hB@"
 *   insn=0x000000000029E1F4 string=0x000000000029E1F8 " )N-\t"
 *   insn=0x000000000029E1F8 string=0x000000000029E1FC "\t"
 *   insn=0x000000000029E1FC string=0x000000000029E200 "+8 "
 *   insn=0x000000000029E200 string=0x000000000029E204 "h! "
 *   insn=0x000000000029E204 string=0x000000000029E208 "4"
 *   insn=0x000000000029E20C string=0x000000000029E210 "`"
 *   insn=0x000000000029E20C string=0x000000000029E220 "q@"
 *   insn=0x000000000029E214 string=0x000000000029E218 "2f"
 *   insn=0x000000000029E218 string=0x000000000029E21C "hB@"
 *   insn=0x000000000029E228 string=0x000000000029E22C "ur@"
 *   insn=0x000000000029E228 string=0x000000000029E2A8 "ur@"
 *   insn=0x000000000029E230 string=0x000000000029E234 "`B"
 *   insn=0x000000000029E238 string=0x000000000029E23C ")f"
 *   insn=0x000000000029E23C string=0x000000000029E240 "ur@"
 *   insn=0x000000000029E248 string=0x000000000029E24C ""
 *   insn=0x000000000029E250 string=0x000000000029E254 ")"
 *   insn=0x000000000029E250 string=0x000000000029E288 "`B@"
 *   insn=0x000000000029E254 string=0x000000000058493C "fff?"
 *   insn=0x000000000029E258 string=0x000000000029E25C ""=I"
 *   insn=0x000000000029E264 string=0x000000000029E268 "("
 *   insn=0x000000000029E268 string=0x0000000000583944 "\n"
 *   insn=0x000000000029E274 string=0x000000000029E278 "a$"
 *   insn=0x000000000029E280 string=0x000000000029E284 ","
 *   insn=0x000000000029E28C string=0x000000000029E290 "`"
 *   insn=0x000000000029E298 string=0x000000000029E29C "`B@"
 *   insn=0x000000000029E2A0 string=0x000000000029E2A4 "_{"
 *   insn=0x000000000029E2A4 string=0x00000000001FD020 "0'"
 *   insn=0x000000000029E2AC string=0x000000000029E2B0 "`B"
 *   insn=0x000000000029E2AC string=0x000000000029E2C0 "H"
 *   insn=0x000000000029E2B4 string=0x000000000029E2B8 "\nf"
 *   insn=0x000000000029E2B8 string=0x000000000029E2BC "ur@"
 *   insn=0x000000000029E2C8 string=0x000000000029E2CC "k"
 *   insn=0x000000000029E2CC string=0x000000000029E2D0 "`! "
 *   insn=0x000000000029E2D4 string=0x000000000029E2E4 "I"
 *   insn=0x000000000029E2DC string=0x000000000029E2E0 ""
 *   insn=0x000000000029E2E0 string=0x000000000029E2FC "`B"
 *   insn=0x000000000029E2E4 string=0x000000000029E2E8 " "
 *   insn=0x000000000029E2EC string=0x000000000029E2F0 "`"
 *   insn=0x000000000029E304 string=0x000000000029E308 "ur@"
 *   insn=0x000000000029E318 string=0x000000000029E31C "("
 *   insn=0x000000000029E318 string=0x000000000029E3D0 "`B"
 *   insn=0x000000000029E320 string=0x000000000029E324 "a"A"
 *   insn=0x000000000029E32C string=0x000000000029E330 "@"
 *   insn=0x000000000029E338 string=0x000000000029E33C "U"
 *   insn=0x000000000029E33C string=0x000000000029E3E4 "`B"
 *   insn=0x000000000029E344 string=0x000000000029E3FC ""
 *   insn=0x000000000029E34C string=0x000000000029E364 "\t\t@"
 *   insn=0x000000000029E364 string=0x000000000029E368 ")"
 *   insn=0x000000000029E368 string=0x000000000029E36C "\t\t"
 *   insn=0x000000000029E374 string=0x000000000029E378 " "
 *   insn=0x000000000029E378 string=0x000000000029E37C "\t@"
 *   insn=0x000000000029E37C string=0x000000000029E380 ")"
 *   insn=0x000000000029E380 string=0x000000000029E384 "\t"
 *   insn=0x000000000029E388 string=0x000000000029E38C ""
 *   insn=0x000000000029E38C string=0x000000000029E390 ""
 *   insn=0x000000000029E398 string=0x000000000029E39C ""
 *   insn=0x000000000029E39C string=0x000000000029E3A0 "("
 *   insn=0x000000000029E3A0 string=0x000000000029E3A4 "%"
 *   insn=0x000000000029E3A0 string=0x000000000029E404 ")"
 *   insn=0x000000000029E3A4 string=0x000000000029E438 "`"
 *   insn=0x000000000029E3A8 string=0x000000000029E3AC "`B"
 *   insn=0x000000000029E3B4 string=0x000000000029E3B8 "ur@"
 *   insn=0x000000000029E3C0 string=0x000000000029E3C4 "wU"
 *   insn=0x000000000029E3C4 string=0x000000000029E3C8 "ur@"
 *   insn=0x000000000029E3C4 string=0x00000000001F39A0 "P'"
 *   insn=0x000000000029E3D8 string=0x000000000029E3DC "ur@"
 *   insn=0x000000000029E3EC string=0x000000000029E3F0 "ur@"
 *   insn=0x000000000029E408 string=0x000000000029E40C ""=I"
 *   insn=0x000000000029E414 string=0x000000000029E418 "("
 *   insn=0x000000000029E424 string=0x000000000029E428 "a$"
 *   insn=0x000000000029E43C string=0x000000000029E440 "  "
 *   insn=0x000000000029E440 string=0x000000000029E444 "`"
 *   insn=0x000000000029E448 string=0x000000000029E44C "H"
 *   insn=0x000000000029E450 string=0x000000000029E454 "`! "
 *   insn=0x000000000029E454 string=0x000000000029E458 "%"
 *   insn=0x000000000029E458 string=0x000000000029E45C "H"
 *   insn=0x000000000029E458 string=0x000000000029E49C "h"
 *   insn=0x000000000029E460 string=0x000000000029E464 " 9*"
 *   insn=0x000000000029E46C string=0x000000000029E470 "H"
 *   insn=0x000000000029E47C string=0x000000000029E480 "`r@"
 *   insn=0x000000000029E484 string=0x000000000029E488 "`B"
 *   insn=0x000000000029E490 string=0x000000000029E494 "`r@"
 *   insn=0x000000000029E498 string=0x00000000001FCF30 "0'"
 *   insn=0x000000000029E49C string=0x000000000029E4A0 ""
 *   insn=0x000000000029E4A0 string=0x000000000029E4A4 "h"
 *   insn=0x000000000029E4A8 string=0x000000000029E4AC "("
 *   insn=0x000000000029E4A8 string=0x000000000029E518 "Fz"
 *   insn=0x000000000029E4B0 string=0x000000000029E4B4 "+"
 *   insn=0x000000000029E4B4 string=0x000000000029E560 "`"
 *   insn=0x000000000029E4BC string=0x000000000029E4D4 "\t\t@"
 *   insn=0x000000000029E4D4 string=0x000000000029E4D8 ")"
 *   insn=0x000000000029E4D8 string=0x000000000029E4DC "\t\t"
 *   insn=0x000000000029E4E4 string=0x000000000029E4E8 " "
 *   insn=0x000000000029E4E8 string=0x000000000029E4EC "\t@"
 *   insn=0x000000000029E4EC string=0x000000000029E4F0 ")"
 *   insn=0x000000000029E4F0 string=0x000000000029E4F4 "\t"
 *   insn=0x000000000029E4F8 string=0x000000000029E4FC ""
 *   insn=0x000000000029E4FC string=0x000000000029E500 ""
 *   insn=0x000000000029E508 string=0x000000000029E50C ""
 *   insn=0x000000000029E50C string=0x000000000029E510 "("
 *   insn=0x000000000029E510 string=0x000000000029E514 "]"
 *   insn=0x000000000029E518 string=0x00000000001FCE30 "0'"
 *   insn=0x000000000029E51C string=0x000000000029E520 ""
 *   insn=0x000000000029E520 string=0x000000000029E524 "y"
 *   insn=0x000000000029E524 string=0x000000000029E528 ""
 *   insn=0x000000000029E528 string=0x000000000029E52C ""
 *   insn=0x000000000029E52C string=0x000000000029E530 "h"
 *   insn=0x000000000029E530 string=0x000000000029E534 "?z"
 *   insn=0x000000000029E534 string=0x000000000029E538 "(""
 *   insn=0x000000000029E538 string=0x000000000029E53C ""
 *   insn=0x000000000029E54C string=0x000000000029E550 " "
 *   insn=0x000000000029E564 string=0x000000000029E568 "`"
 *   insn=0x000000000029E574 string=0x000000000029E578 ".z"
 *   insn=0x000000000029E578 string=0x000000000029E57C "(""
 *   insn=0x000000000029E57C string=0x000000000029E580 ""
 *   insn=0x000000000029E590 string=0x000000000029E594 " "
 *   insn=0x000000000029E5A0 string=0x000000000029E5A4 "`"
 *   insn=0x000000000029E5A8 string=0x000000000029E5AC "  "
 *   insn=0x000000000029E5AC string=0x000000000029E5B0 "`"
 *   insn=0x000000000029E5B4 string=0x000000000029E5B8 "`r@"
 *   insn=0x000000000029E5BC string=0x000000000029E5C0 "`B"
 *   insn=0x000000000029E5C4 string=0x000000000029E5C8 "Fe"
 *   insn=0x000000000029E5C8 string=0x000000000029E5CC "`r@"
 *   insn=0x000000000029E5D4 string=0x000000000029E5D8 "(""
 *   insn=0x000000000029E5D8 string=0x000000000029E5DC ""
 *   insn=0x000000000029E5EC string=0x000000000029E5F0 " "
 *   insn=0x000000000029E5FC string=0x000000000029E600 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SkellyMonsterControllerComponent::Update(
        Caver::SkellyMonsterControllerComponent *this,
        float a2)
{
  __int64 NearestEnemy; // x0
  int v5; // w8
  __int64 v6; // x20
  Caver::CharControllerComponent *v7; // x0
  __int64 v8; // x9
  float v9; // s9
  __int64 v10; // x8
  float v11; // s10
  float v12; // s11
  int v13; // w20
  _QWORD *v14; // x21
  __int64 v15; // x8
  float *v16; // x8
  Caver::EntityComponent *v17; // x0
  __int64 v18; // x21
  int v19; // w8
  float v20; // s11
  int v21; // w22
  bool v22; // cc
  float v23; // s0
  __int64 v24; // x8
  int v25; // w9
  float *v26; // x8
  float v27; // s0
  Caver::CharControllerComponent *v28; // x0
  int v29; // w8
  bool v30; // vf
  float v31; // s0
  int v32; // w9
  Caver *v33; // x0
  int v34; // w8
  float v35; // s0
  float v36; // s0
  Caver::CharControllerComponent *v37; // x0
  Caver *started; // x0

  if ( *((_QWORD *)this + 16)
    || (Caver::ComponentOutletBase::Connect((Caver::SkellyMonsterControllerComponent *)((char *)this + 112), this),
        *((_QWORD *)this + 16)) )
  {
    if ( *((_QWORD *)this + 28)
      || (Caver::ComponentOutletBase::Connect((Caver::SkellyMonsterControllerComponent *)((char *)this + 208), this),
          *((_QWORD *)this + 28)) )
    {
      NearestEnemy = Caver::MonsterControllerComponent::FindNearestEnemy(this);
      v5 = *((unsigned __int8 *)this + 272);
      v6 = NearestEnemy;
      if ( NearestEnemy && *((_BYTE *)this + 272) )
      {
        if ( *((_QWORD *)this + 31)
          || (Caver::ComponentOutletBase::Connect((Caver::SkellyMonsterControllerComponent *)((char *)this + 232), this),
              (NearestEnemy = *((_QWORD *)this + 31)) != 0) )
        {
          Caver::ShapeComponent::ContainsWorldPoint();
          if ( (NearestEnemy & 1) != 0 )
          {
            v7 = (Caver::CharControllerComponent *)*((_QWORD *)this + 28);
            *((_BYTE *)this + 272) = 0;
            if ( !v7 )
            {
              Caver::ComponentOutletBase::Connect((Caver::SkellyMonsterControllerComponent *)((char *)this + 208), this);
              v7 = (Caver::CharControllerComponent *)*((_QWORD *)this + 28);
            }
            NearestEnemy = Caver::CharControllerComponent::StartJumping(v7);
          }
        }
        v5 = *((unsigned __int8 *)this + 272);
      }
      if ( !v5 )
      {
        if ( !v6 )
          goto LABEL_84;
        v8 = *((_QWORD *)this + 5);
        v9 = *(float *)(v6 + 116);
        v10 = *((_QWORD *)this + 16);
        v11 = *(float *)(v8 + 116);
        v12 = *(float *)(v6 + 112) - *(float *)(v8 + 112);
        if ( v12 > 0.0 )
          v13 = 1;
        else
          v13 = -1;
        if ( !v10 )
        {
          NearestEnemy = Caver::ComponentOutletBase::Connect(
                           (Caver::SkellyMonsterControllerComponent *)((char *)this + 112),
                           this);
          v10 = *((_QWORD *)this + 16);
        }
        if ( *(_DWORD *)(v10 + 112) == v13 )
        {
LABEL_30:
          v18 = *((_QWORD *)this + 28);
          if ( !v18 )
          {
            NearestEnemy = Caver::ComponentOutletBase::Connect(
                             (Caver::SkellyMonsterControllerComponent *)((char *)this + 208),
                             this);
            v18 = *((_QWORD *)this + 28);
          }
          v19 = *(_DWORD *)(v18 + 560);
          v20 = fabsf(v12);
          if ( v20 >= 60.0 )
          {
            if ( v19 )
              v22 = v20 <= 150.0;
            else
              v22 = 0;
            if ( v22 )
              v21 = *(_DWORD *)(v18 + 560);
            else
              v21 = v13;
            if ( v18 )
            {
LABEL_43:
              if ( v21 == v19 )
              {
                if ( v18 )
                  goto LABEL_45;
              }
              else
              {
                if ( !v18 )
                {
                  Caver::ComponentOutletBase::Connect(
                    (Caver::SkellyMonsterControllerComponent *)((char *)this + 208),
                    this);
                  v18 = *((_QWORD *)this + 28);
                }
                NearestEnemy = Caver::CharControllerComponent::StartMovingToDirection(
                                 (Caver::CharControllerComponent *)v18,
                                 v21);
                v18 = *((_QWORD *)this + 28);
                if ( v18 )
                {
LABEL_45:
                  v23 = 0.8;
                  if ( v21 == v13 )
                    v23 = 1.0;
                  *(float *)(v18 + 616) = v23 * *((float *)this + 72);
                  if ( v18 )
                  {
                    v24 = *(_QWORD *)(v18 + 400);
                    if ( v24 )
                      goto LABEL_61;
                  }
                  else
                  {
                    NearestEnemy = Caver::ComponentOutletBase::Connect(
                                     (Caver::SkellyMonsterControllerComponent *)((char *)this + 208),
                                     this);
                    v18 = *((_QWORD *)this + 28);
                    v24 = *(_QWORD *)(v18 + 400);
                    if ( v24 )
                      goto LABEL_61;
                  }
                  v24 = *(_QWORD *)(v18 + 152);
                  if ( v24
                    || (Caver::ComponentOutletBase::Connect(
                          (Caver::ComponentOutletBase *)(v18 + 136),
                          (const Caver::Component *)v18),
                        (v24 = *(_QWORD *)(v18 + 152)) != 0) )
                  {
                    ++*(_DWORD *)(v24 + 8);
                  }
                  NearestEnemy = *(_QWORD *)(v18 + 400);
                  *(_QWORD *)(v18 + 400) = v24;
                  if ( NearestEnemy )
                  {
                    v25 = *(_DWORD *)(NearestEnemy + 8) - 1;
                    *(_DWORD *)(NearestEnemy + 8) = v25;
                    if ( !v25 )
                    {
                      NearestEnemy = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)NearestEnemy + 8LL))(NearestEnemy);
                      v26 = *(float **)(*(_QWORD *)(v18 + 400) + 368LL);
                      if ( !v26 )
                      {
LABEL_63:
                        v27 = *((float *)this + 70) - a2;
                        *((float *)this + 70) = v27;
                        if ( v27 <= 0.0 )
                        {
                          if ( v20 < 300.0 && (float)(v9 - v11) > -50.0 && (float)(v9 - v11) < 90.0 )
                          {
                            v28 = (Caver::CharControllerComponent *)*((_QWORD *)this + 28);
                            if ( !v28 )
                            {
                              Caver::ComponentOutletBase::Connect(
                                (Caver::SkellyMonsterControllerComponent *)((char *)this + 208),
                                this);
                              v28 = (Caver::CharControllerComponent *)*((_QWORD *)this + 28);
                            }
                            NearestEnemy = Caver::CharControllerComponent::Swing(v28);
                          }
                          v29 = *((_DWORD *)this + 71);
                          v30 = __OFSUB__(v29--, 1);
                          *((_DWORD *)this + 71) = v29;
                          if ( (v29 < 0) ^ v30 | (v29 == 0) )
                          {
                            v33 = (Caver *)Caver::fastrandom((Caver *)NearestEnemy);
                            if ( (int)v33 >= 0 )
                              v34 = (int)v33;
                            else
                              v34 = (_DWORD)v33 + 1;
                            *((_DWORD *)this + 71) = (_DWORD)v33 - (v34 & 0xFFFFFFFE) + 1;
                            NearestEnemy = Caver::fastrandom(v33);
                            v31 = (float)((float)((float)(int)NearestEnemy / (float)Caver::FASTRANDOM_MAX) * 0.5) + 1.5;
                          }
                          else
                          {
                            v31 = 0.1;
                          }
                          *((float *)this + 70) = v31;
                        }
                        goto LABEL_84;
                      }
                      goto LABEL_62;
                    }
                  }
LABEL_61:
                  v26 = *(float **)(v24 + 368);
                  if ( !v26 )
                    goto LABEL_63;
LABEL_62:
                  if ( (float)((float)((float)(v26[10] * 0.9) - v26[3]) * (float)(v26[12] * v26[13])) <= 0.01 )
                    goto LABEL_63;
LABEL_84:
                  v35 = *((float *)this + 69);
                  if ( v35 > 100.0 )
                  {
                    v35 = (float)((float)((float)(int)Caver::fastrandom((Caver *)NearestEnemy)
                                        / (float)Caver::FASTRANDOM_MAX)
                                * 5.0)
                        + 1.0;
                    *((float *)this + 69) = v35;
                  }
                  v36 = v35 - a2;
                  *((float *)this + 69) = v36;
                  if ( v36 <= 0.0 )
                  {
                    v37 = (Caver::CharControllerComponent *)*((_QWORD *)this + 28);
                    if ( !v37 )
                    {
                      Caver::ComponentOutletBase::Connect(
                        (Caver::SkellyMonsterControllerComponent *)((char *)this + 208),
                        this);
                      v37 = (Caver::CharControllerComponent *)*((_QWORD *)this + 28);
                    }
                    started = (Caver *)Caver::CharControllerComponent::StartJumping(v37);
                    *((float *)this + 69) = (float)((float)((float)(int)Caver::fastrandom(started)
                                                          / (float)Caver::FASTRANDOM_MAX)
                                                  * 5.0)
                                          + 1.0;
                  }
                  return;
                }
              }
              NearestEnemy = Caver::ComponentOutletBase::Connect(
                               (Caver::SkellyMonsterControllerComponent *)((char *)this + 208),
                               this);
              v18 = *((_QWORD *)this + 28);
              goto LABEL_45;
            }
          }
          else
          {
            v21 = -v13;
            if ( v18 )
              goto LABEL_43;
          }
          NearestEnemy = Caver::ComponentOutletBase::Connect(
                           (Caver::SkellyMonsterControllerComponent *)((char *)this + 208),
                           this);
          v18 = *((_QWORD *)this + 28);
          v19 = *(_DWORD *)(v18 + 560);
          goto LABEL_43;
        }
        v14 = (_QWORD *)*((_QWORD *)this + 28);
        if ( !v14 )
        {
          NearestEnemy = Caver::ComponentOutletBase::Connect(
                           (Caver::SkellyMonsterControllerComponent *)((char *)this + 208),
                           this);
          v14 = (_QWORD *)*((_QWORD *)this + 28);
        }
        v15 = v14[50];
        if ( v15 )
          goto LABEL_25;
        v15 = v14[19];
        if ( v15
          || (Caver::ComponentOutletBase::Connect(
                (Caver::ComponentOutletBase *)(v14 + 17),
                (const Caver::Component *)v14),
              (v15 = v14[19]) != 0) )
        {
          ++*(_DWORD *)(v15 + 8);
        }
        NearestEnemy = v14[50];
        v14[50] = v15;
        if ( !NearestEnemy || (v32 = *(_DWORD *)(NearestEnemy + 8) - 1, (*(_DWORD *)(NearestEnemy + 8) = v32) != 0) )
        {
LABEL_25:
          v16 = *(float **)(v15 + 368);
          if ( !v16 )
          {
LABEL_27:
            v17 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
            if ( !v17 )
            {
              Caver::ComponentOutletBase::Connect((Caver::SkellyMonsterControllerComponent *)((char *)this + 112), this);
              v17 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
            }
            NearestEnemy = Caver::EntityComponent::SetFacingDirection(v17, v13);
            goto LABEL_30;
          }
        }
        else
        {
          NearestEnemy = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)NearestEnemy + 8LL))(NearestEnemy);
          v16 = *(float **)(v14[50] + 368LL);
          if ( !v16 )
            goto LABEL_27;
        }
        if ( (float)((float)((float)(v16[10] * 0.9) - v16[3]) * (float)(v16[12] * v16[13])) > 0.01 )
          goto LABEL_30;
        goto LABEL_27;
      }
    }
  }
}

