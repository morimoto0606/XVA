// XVA.cpp : DLL �A�v���P�[�V�����p�ɃG�N�X�|�[�g�����֐����`���܂��B
//

#include "stdafx.h"
#include "XVA.h"


// ����́A�G�N�X�|�[�g���ꂽ�ϐ��̗�ł��B
XVA_API int nXVA=0;

// ����́A�G�N�X�|�[�g���ꂽ�֐��̗�ł��B
XVA_API int fnXVA(void)
{
    return 42;
}

// ����́A�G�N�X�|�[�g���ꂽ�N���X�̃R���X�g���N�^�[�ł��B
// �N���X��`�Ɋւ��Ă� XVA.h ���Q�Ƃ��Ă��������B
CXVA::CXVA()
{
    return;
}
