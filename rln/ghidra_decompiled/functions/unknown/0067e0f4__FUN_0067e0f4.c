/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0067e0f4
 * Function: FUN_0067e0f4
 * Signature: undefined FUN_0067e0f4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0067e0f4(undefined1 *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  char *pcVar6;
  
                    /* try { // try from 0067e14c to 0077e14f has its CatchHandler @ 0067e150 */
                    /* catch() { ... } // from try @ 0067e14c with catch @ 0067e150 */
                    /* try { // try from 0067e154 to 0077e157 has its CatchHandler @ 0067e160 */
                    /* try { // try from 0067e158 to 0077e163 has its CatchHandler @ 0067e108 */
                    /* try { // try from 0067e108 to 0077e127 has its CatchHandler @ 0067e108
                       catch() { ... } // from try @ 0067e108 with catch @ 0067e108
                       catch() { ... } // from try @ 0067e130 with catch @ 0067e108
                       catch() { ... } // from try @ 0067e158 with catch @ 0067e108 */
  switch(*param_3) {
  case 3:
    param_3 = *(undefined4 **)(param_3 + 2);
    goto LAB_0067e130;
  default:
    goto LAB_0067e130;
  case 0x19:
  case 0x1c:
    lVar2 = 0;
    lVar3 = *(long *)(param_1 + 0x100);
    do {
      cVar1 = " restrict"[lVar2];
      if (lVar3 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar4 = 1;
        lVar3 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar4 = lVar3 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar4;
      lVar2 = lVar2 + 1;
      param_1[lVar3] = cVar1;
      param_1[0x108] = cVar1;
      lVar3 = lVar4;
    } while (lVar2 != 9);
    break;
  case 0x1a:
  case 0x1d:
    lVar2 = 0;
    lVar3 = *(long *)(param_1 + 0x100);
    do {
      cVar1 = " volatile"[lVar2];
      if (lVar3 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar4 = 1;
        lVar3 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar4 = lVar3 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar4;
      lVar2 = lVar2 + 1;
      param_1[lVar3] = cVar1;
      param_1[0x108] = cVar1;
      lVar3 = lVar4;
    } while (lVar2 != 9);
    break;
  case 0x1b:
  case 0x1e:
    lVar2 = *(long *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 0x20;
                    /* try { // try from 0067e8d4 to 0077e8e7 has its CatchHandler @ 0067eaf4 */
      lVar2 = 2;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      param_1[1] = 99;
                    /* try { // try from 0067e8e8 to 0077e8eb has its CatchHandler @ 0067ea44 */
LAB_0067e2fc:
      lVar3 = lVar2 + 1;
      *(long *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x6f;
      param_1[0x108] = 0x6f;
      if (lVar3 == 0xff) {
        param_1[0xff] = 0;
        uVar5 = 0x74;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x6e;
        lVar3 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x73;
      }
      else {
LAB_0067e318:
        lVar2 = lVar3 + 1;
        *(long *)(param_1 + 0x100) = lVar2;
        param_1[lVar3] = 0x6e;
        param_1[0x108] = 0x6e;
                    /* try { // try from 0067e32c to 0077e34f has its CatchHandler @ 0067e32c
                       catch() { ... } // from try @ 0067e32c with catch @ 0067e32c
                       catch() { ... } // from try @ 0067e354 with catch @ 0067e32c */
        if (lVar2 != 0xff) goto LAB_0067e334;
        uVar5 = 0x74;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x73;
        lVar3 = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      goto LAB_0067e418;
    }
    lVar3 = lVar2 + 1;
    *(long *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x20;
    param_1[0x108] = 0x20;
    if (lVar3 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                    /* try { // try from 0067e698 to 0077e69b has its CatchHandler @ 0067e6c4 */
      *param_1 = 99;
                    /* try { // try from 0067e69c to 0077e72f has its CatchHandler @ 0067e504 */
      lVar3 = 2;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      param_1[1] = 0x6f;
      goto LAB_0067e318;
    }
    lVar2 = lVar2 + 2;
    *(long *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = 99;
    param_1[0x108] = 99;
    if (lVar2 != 0xff) goto LAB_0067e2fc;
                    /* try { // try from 0067e858 to 0077e86b has its CatchHandler @ 0067ea40 */
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *param_1 = 0x6f;
                    /* try { // try from 0067e86c to 0077e86f has its CatchHandler @ 0067ea00 */
    lVar2 = 2;
                    /* try { // try from 0067e870 to 0077e893 has its CatchHandler @ 0067e774 */
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    param_1[1] = 0x6e;
LAB_0067e334:
    lVar3 = lVar2 + 1;
    *(long *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x73;
    param_1[0x108] = 0x73;
    uVar5 = 0x74;
    if (lVar3 != 0xff) goto LAB_0067e418;
    goto LAB_0067e350;
  case 0x1f:
    lVar3 = *(long *)(param_1 + 0x100);
    if (lVar3 == 0xff) {
                    /* try { // try from 0067e8ec to 0077eb03 has its CatchHandler @ 0067e774 */
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 1;
      lVar3 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar2 = lVar3 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = 0x20;
                    /* try { // try from 0067e39c to 0077e3a3 has its CatchHandler @ 0067e3c0 */
    param_1[0x108] = 0x20;
    goto LAB_0067e3a0;
  case 0x20:
    lVar3 = *(long *)(param_1 + 0x100);
                    /* catch() { ... } // from try @ 0067e4b8 with catch @ 0067e3d4 */
    if (lVar3 == 0xff) {
                    /* catch() { ... } // from try @ 0067e730 with catch @ 0067e750 */
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 1;
      lVar3 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
                    /* try { // try from 0067e774 to 0077e857 has its CatchHandler @ 0067e774
                       catch() { ... } // from try @ 0067e774 with catch @ 0067e774
                       catch() { ... } // from try @ 0067e870 with catch @ 0067e774
                       catch() { ... } // from try @ 0067e8ac with catch @ 0067e774
                       catch() { ... } // from try @ 0067e8ec with catch @ 0067e774 */
    }
    else {
      lVar2 = lVar3 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = 0x20;
    param_1[0x108] = 0x20;
    goto LAB_0067e3f0;
  case 0x21:
    lVar2 = *(long *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
                    /* try { // try from 0067e894 to 0077e8a7 has its CatchHandler @ 0067eaf8 */
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      lVar2 = 0;
                    /* try { // try from 0067e8a8 to 0077e8ab has its CatchHandler @ 0067ea84 */
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
                    /* try { // try from 0067e8ac to 0077e8d3 has its CatchHandler @ 0067e774 */
    }
    else {
      lVar3 = lVar2 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x20;
                    /* try { // try from 0067e458 to 0077e45b has its CatchHandler @ 0067e4d8 */
    param_1[0x108] = 0x20;
    param_3 = *(undefined4 **)(param_3 + 4);
LAB_0067e130:
                    /* try { // try from 0067e130 to 0077e14b has its CatchHandler @ 0067e108 */
                    /* catch() { ... } // from try @ 0067e128 with catch @ 0067e140 */
    FUN_0067a6e8(param_1,param_2,param_3);
    return;
  case 0x22:
    if ((param_2 >> 2 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0x100);
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x2a;
      param_1[0x108] = 0x2a;
    }
    break;
  case 0x23:
    lVar2 = *(long *)(param_1 + 0x100);
LAB_0067e3a0:
                    /* try { // try from 0067e3a4 to 0077e3d3 has its CatchHandler @ 0067e37c */
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                    /* try { // try from 0067e730 to 0077e733 has its CatchHandler @ 0067e750 */
      lVar3 = 1;
      lVar2 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar3 = lVar2 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x26;
    param_1[0x108] = 0x26;
    break;
  case 0x24:
    lVar2 = *(long *)(param_1 + 0x100);
LAB_0067e3f0:
    if (lVar2 == 0xff) {
                    /* catch() { ... } // from try @ 0067e590 with catch @ 0067e6f0 */
      uVar5 = 0x26;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      *param_1 = 0x26;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
                    /* try { // try from 0067e3f8 to 0077e3fb has its CatchHandler @ 0067e428 */
      lVar3 = lVar2 + 1;
      *(long *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x26;
      param_1[0x108] = 0x26;
      uVar5 = 0x26;
      if (lVar3 == 0xff) {
LAB_0067e350:
                    /* try { // try from 0067e350 to 0077e353 has its CatchHandler @ 0067e368 */
                    /* try { // try from 0067e354 to 0077e37b has its CatchHandler @ 0067e32c */
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,lVar3,*(undefined8 *)(param_1 + 0x118));
                    /* catch() { ... } // from try @ 0067e350 with catch @ 0067e368 */
        lVar2 = 1;
        lVar3 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
                    /* catch() { ... } // from try @ 0067e3a4 with catch @ 0067e37c */
        goto LAB_0067e41c;
      }
    }
LAB_0067e418:
    lVar2 = lVar3 + 1;
LAB_0067e41c:
    *(long *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = uVar5;
    param_1[0x108] = uVar5;
                    /* catch() { ... } // from try @ 0067e3f8 with catch @ 0067e428 */
    return;
  case 0x25:
                    /* try { // try from 0067e4ac to 0077e4b7 has its CatchHandler @ 0067e4e8 */
    pcVar6 = "complex ";
    lVar2 = *(long *)(param_1 + 0x100);
                    /* try { // try from 0067e4b8 to 0077e503 has its CatchHandler @ 0067e3d4 */
    do {
      cVar1 = *pcVar6;
      if (lVar2 == 0xff) {
                    /* catch() { ... } // from try @ 0067e4ac with catch @ 0067e4e8 */
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
                    /* catch() { ... } // from try @ 0067e69c with catch @ 0067e504 */
        lVar2 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar3;
      pcVar6 = pcVar6 + 1;
      param_1[lVar2] = cVar1;
      param_1[0x108] = cVar1;
      lVar2 = lVar3;
                    /* catch() { ... } // from try @ 0067e458 with catch @ 0067e4d8 */
    } while (pcVar6 != "");
    break;
  case 0x26:
                    /* try { // try from 0067e518 to 0077e51b has its CatchHandler @ 0067e620 */
    pcVar6 = "imaginary ";
    lVar2 = *(long *)(param_1 + 0x100);
    do {
      cVar1 = *pcVar6;
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar3;
      pcVar6 = pcVar6 + 1;
                    /* try { // try from 0067e53c to 0077e563 has its CatchHandler @ 0067e618 */
      param_1[lVar2] = cVar1;
      param_1[0x108] = cVar1;
      lVar2 = lVar3;
    } while (pcVar6 != "");
    break;
  case 0x2b:
    if (param_1[0x108] != '(') {
                    /* try { // try from 0067e590 to 0077e593 has its CatchHandler @ 0067e6f0 */
      lVar2 = *(long *)(param_1 + 0x100);
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x20;
      param_1[0x108] = 0x20;
    }
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    lVar2 = *(long *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 2;
      *param_1 = 0x3a;
      param_1[1] = 0x3a;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
LAB_0067e604:
      lVar3 = lVar2 + 1;
    }
    else {
      lVar3 = lVar2 + 1;
      *(long *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x3a;
                    /* try { // try from 0067e5dc to 0077e5df has its CatchHandler @ 0067e6d4 */
      param_1[0x108] = 0x3a;
      if (lVar3 == 0xff) {
                    /* catch() { ... } // from try @ 0067e644 with catch @ 0067e6b8 */
                    /* catch() { ... } // from try @ 0067e698 with catch @ 0067e6c4 */
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x3a;
                    /* catch() { ... } // from try @ 0067e5dc with catch @ 0067e6d4 */
        lVar2 = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        goto LAB_0067e604;
      }
      lVar2 = lVar2 + 2;
      *(long *)(param_1 + 0x100) = lVar2;
      param_1[lVar3] = 0x3a;
      param_1[0x108] = 0x3a;
      if (lVar2 != 0xff) goto LAB_0067e604;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      lVar2 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    *(long *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x2a;
    param_1[0x108] = 0x2a;
    break;
  case 0x2d:
                    /* catch() { ... } // from try @ 0067e154 with catch @ 0067e160 */
    pcVar6 = " __vector(";
    lVar2 = *(long *)(param_1 + 0x100);
    do {
      cVar1 = *pcVar6;
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar3;
      pcVar6 = pcVar6 + 1;
      param_1[lVar2] = cVar1;
      param_1[0x108] = cVar1;
      lVar2 = lVar3;
    } while (pcVar6 != "");
                    /* catch() { ... } // from try @ 0067e53c with catch @ 0067e618 */
                    /* catch() { ... } // from try @ 0067e518 with catch @ 0067e620 */
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    lVar2 = *(long *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      lVar2 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar3 = lVar2 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x29;
                    /* try { // try from 0067e644 to 0077e66b has its CatchHandler @ 0067e6b8 */
    param_1[0x108] = 0x29;
  }
                    /* catch() { ... } // from try @ 0067e39c with catch @ 0067e3c0 */
  return;
}


