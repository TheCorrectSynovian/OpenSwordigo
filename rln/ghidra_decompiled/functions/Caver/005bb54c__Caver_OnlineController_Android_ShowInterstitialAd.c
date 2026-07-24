/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bb54c
 * Function: Caver::OnlineController_Android::ShowInterstitialAd
 * Signature: undefined __thiscall ShowInterstitialAd(OnlineController_Android * this, string * param_1, int param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OnlineController_Android::ShowInterstitialAd(std::string const&, int, float) */

void __thiscall
Caver::OnlineController_Android::ShowInterstitialAd
          (OnlineController_Android *this,string *param_1,int param_2,float param_3)

{
  int iVar1;
  ulong uVar2;
  double dVar3;
  
  uVar2 = (**(code **)(*(long *)this + 0x110))();
  if ((uVar2 & 1) != 0) {
    iVar1 = AndroidGetInterstitialAdInterval(param_1,param_2);
    dVar3 = (double)TimerCurrentSeconds();
                    /* catch() { ... } // from try @ 005baf44 with catch @ 005bb5a4 */
                    /* catch() { ... } // from try @ 005baf78 with catch @ 005bb5a8
                       catch() { ... } // from try @ 005bafbc with catch @ 005bb5a8 */
    if ((iVar1 != 0) && (dVar3 - *(double *)(this + 0x28) < (double)iVar1)) {
      AndroidLoadInterstitialAd();
      return;
    }
    uVar2 = AndroidShowInterstitialAd((double)param_3);
    if ((uVar2 & 1) != 0) {
      *(double *)(this + 0x28) = dVar3;
    }
  }
  return;
}


