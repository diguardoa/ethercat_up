#include "slrtappmapping.h"
#include "./maps/modello_2017b_levaRetro_acc.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <modello_2017b_levaRetro_acc> */
		{ /* SignalMapInfo */
			modello_2017b_levaRetro_acc_BIOMAP,
			modello_2017b_levaRetro_acc_LBLMAP,
			modello_2017b_levaRetro_acc_SIDMAP,
			modello_2017b_levaRetro_acc_SBIO,
			modello_2017b_levaRetro_acc_SLBL,
			{0,717},
			575,
		},
		{ /* ParamMapInfo */
			modello_2017b_levaRetro_acc_PTIDSMAP,
			modello_2017b_levaRetro_acc_PTNAMESMAP,
			modello_2017b_levaRetro_acc_SPTMAP,
			{0,556},
			557,
		},
		"modello_2017b_levaRetro_acc",
		"",
		"modello_2017b_levaRetro_acc",
		7,
		modello_2017b_levaRetro_acc_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}