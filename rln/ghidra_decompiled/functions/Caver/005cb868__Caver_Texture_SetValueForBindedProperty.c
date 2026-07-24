/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cb868
 * Function: Caver::Texture::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(Texture * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::Texture::SetValueForBindedProperty(Texture *this,int param_1,BindingValue *param_2)

{
  char *pcVar1;
  float fVar2;
  int iVar3;
  
  switch(param_1) {
  case 5:
    *(undefined4 *)(*(long *)(this + 0x90) + 0xc) = **(undefined4 **)(param_2 + 8);
    return;
  case 6:
                    /* catch() { ... } // from try @ 005cba10 with catch @ 005cb89c */
    *(undefined4 *)(*(long *)(this + 0x90) + 0x10) = **(undefined4 **)(param_2 + 8);
    return;
  case 7:
    pcVar1 = *(char **)(this + 0x90);
    fVar2 = (float)**(int **)(param_2 + 8);
    *(int *)(pcVar1 + 4) = **(int **)(param_2 + 8);
    if (*pcVar1 != '\0') {
      *(int *)(pcVar1 + 8) = (int)(fVar2 / *(float *)(pcVar1 + 0x14));
      return;
    }
                    /* try { // try from 005cb910 to 006cb943 has its CatchHandler @ 005cbea0 */
    iVar3 = *(int *)(pcVar1 + 8);
    break;
  case 8:
    pcVar1 = *(char **)(this + 0x90);
    iVar3 = **(int **)(param_2 + 8);
    *(int *)(pcVar1 + 8) = iVar3;
    if (*pcVar1 != '\0') {
      *(int *)(pcVar1 + 4) = (int)(*(float *)(pcVar1 + 0x14) * (float)iVar3);
      return;
    }
    fVar2 = (float)*(int *)(pcVar1 + 4);
    break;
  default:
    goto switchD_005cb884_default;
  }
  *(float *)(pcVar1 + 0x14) = fVar2 / (float)iVar3;
switchD_005cb884_default:
  return;
}


