static const char *colorname[NUMCOLS] = {
	"black",     /* after initialization */
	"#CC3333",   /* wrong password */
	"#005577",   /* during input */
};

/* treat a cleared input like a wrong password */
static const int failonclear = 1;
