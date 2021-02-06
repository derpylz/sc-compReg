// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// loadPeakNameIntersectFile
Rcpp::List loadPeakNameIntersectFile(std::string path, char token);
RcppExport SEXP _scCompReg_loadPeakNameIntersectFile(SEXP pathSEXP, SEXP tokenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< char >::type token(tokenSEXP);
    rcpp_result_gen = Rcpp::wrap(loadPeakNameIntersectFile(path, token));
    return rcpp_result_gen;
END_RCPP
}
// threshK
arma::vec threshK(const arma::mat& A, unsigned int thresh);
RcppExport SEXP _scCompReg_threshK(SEXP ASEXP, SEXP threshSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< unsigned int >::type thresh(threshSEXP);
    rcpp_result_gen = Rcpp::wrap(threshK(A, thresh));
    return rcpp_result_gen;
END_RCPP
}
// mult
arma::sp_mat mult(const arma::sp_mat& A, const arma::sp_mat& B);
RcppExport SEXP _scCompReg_mult(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(mult(A, B));
    return rcpp_result_gen;
END_RCPP
}
// colMax
arma::rowvec colMax(const arma::sp_mat& X);
RcppExport SEXP _scCompReg_colMax(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(colMax(X));
    return rcpp_result_gen;
END_RCPP
}
// mfbsLoad
Rcpp::List mfbsLoad(std::string motifTargetPath);
RcppExport SEXP _scCompReg_mfbsLoad(SEXP motifTargetPathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type motifTargetPath(motifTargetPathSEXP);
    rcpp_result_gen = Rcpp::wrap(mfbsLoad(motifTargetPath));
    return rcpp_result_gen;
END_RCPP
}
// corrTest
arma::mat corrTest(const arma::mat& X, const arma::mat& Y);
RcppExport SEXP _scCompReg_corrTest(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(corrTest(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// accumArrayMin
arma::vec accumArrayMin(const arma::vec& subs, const arma::vec& val);
RcppExport SEXP _scCompReg_accumArrayMin(SEXP subsSEXP, SEXP valSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type subs(subsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type val(valSEXP);
    rcpp_result_gen = Rcpp::wrap(accumArrayMin(subs, val));
    return rcpp_result_gen;
END_RCPP
}
// compRegLoad
Rcpp::List compRegLoad(std::string peakGenePriorPath);
RcppExport SEXP _scCompReg_compRegLoad(SEXP peakGenePriorPathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type peakGenePriorPath(peakGenePriorPathSEXP);
    rcpp_result_gen = Rcpp::wrap(compRegLoad(peakGenePriorPath));
    return rcpp_result_gen;
END_RCPP
}
// initializeMatrix
Rcpp::List initializeMatrix(const unsigned int POnRow, const unsigned int POnCol, const unsigned int XnCol, const unsigned int k, const arma::sp_mat& D);
RcppExport SEXP _scCompReg_initializeMatrix(SEXP POnRowSEXP, SEXP POnColSEXP, SEXP XnColSEXP, SEXP kSEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const unsigned int >::type POnRow(POnRowSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type POnCol(POnColSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type XnCol(XnColSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type k(kSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(initializeMatrix(POnRow, POnCol, XnCol, k, D));
    return rcpp_result_gen;
END_RCPP
}
// computeLambda
Rcpp::List computeLambda(const arma::sp_mat& PeakO, const arma::mat& w1, const arma::mat& h1, const arma::sp_mat& X, const arma::mat& w2, const arma::mat& h2, const arma::sp_mat& D, double alpha, double beta, double eps);
RcppExport SEXP _scCompReg_computeLambda(SEXP PeakOSEXP, SEXP w1SEXP, SEXP h1SEXP, SEXP XSEXP, SEXP w2SEXP, SEXP h2SEXP, SEXP DSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type PeakO(PeakOSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type w1(w1SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type h1(h1SEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type w2(w2SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type h2(h2SEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(computeLambda(PeakO, w1, h1, X, w2, h2, D, alpha, beta, eps));
    return rcpp_result_gen;
END_RCPP
}
// iterateCluster
Rcpp::List iterateCluster(const arma::sp_mat& PeakO, const arma::sp_mat& X, const arma::sp_mat& D, const unsigned int k, const unsigned int maxIter, double lambda1, double lambda2, arma::mat W10, arma::mat H10, arma::mat W20, arma::mat H20, double tolX, double tolFun, bool verbose, int loopUpdate);
RcppExport SEXP _scCompReg_iterateCluster(SEXP PeakOSEXP, SEXP XSEXP, SEXP DSEXP, SEXP kSEXP, SEXP maxIterSEXP, SEXP lambda1SEXP, SEXP lambda2SEXP, SEXP W10SEXP, SEXP H10SEXP, SEXP W20SEXP, SEXP H20SEXP, SEXP tolXSEXP, SEXP tolFunSEXP, SEXP verboseSEXP, SEXP loopUpdateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type PeakO(PeakOSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type k(kSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< double >::type lambda1(lambda1SEXP);
    Rcpp::traits::input_parameter< double >::type lambda2(lambda2SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W10(W10SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type H10(H10SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W20(W20SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type H20(H20SEXP);
    Rcpp::traits::input_parameter< double >::type tolX(tolXSEXP);
    Rcpp::traits::input_parameter< double >::type tolFun(tolFunSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type loopUpdate(loopUpdateSEXP);
    rcpp_result_gen = Rcpp::wrap(iterateCluster(PeakO, X, D, k, maxIter, lambda1, lambda2, W10, H10, W20, H20, tolX, tolFun, verbose, loopUpdate));
    return rcpp_result_gen;
END_RCPP
}
// cluster
Rcpp::List cluster(const arma::mat& H1, const arma::mat& H2);
RcppExport SEXP _scCompReg_cluster(SEXP H1SEXP, SEXP H2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type H1(H1SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type H2(H2SEXP);
    rcpp_result_gen = Rcpp::wrap(cluster(H1, H2));
    return rcpp_result_gen;
END_RCPP
}
// postLapMatMult
Rcpp::List postLapMatMult(arma::mat W1, arma::mat W2, arma::mat H1, arma::mat H2);
RcppExport SEXP _scCompReg_postLapMatMult(SEXP W1SEXP, SEXP W2SEXP, SEXP H1SEXP, SEXP H2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type W1(W1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W2(W2SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type H1(H1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type H2(H2SEXP);
    rcpp_result_gen = Rcpp::wrap(postLapMatMult(W1, W2, H1, H2));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_scCompReg_loadPeakNameIntersectFile", (DL_FUNC) &_scCompReg_loadPeakNameIntersectFile, 2},
    {"_scCompReg_threshK", (DL_FUNC) &_scCompReg_threshK, 2},
    {"_scCompReg_mult", (DL_FUNC) &_scCompReg_mult, 2},
    {"_scCompReg_colMax", (DL_FUNC) &_scCompReg_colMax, 1},
    {"_scCompReg_mfbsLoad", (DL_FUNC) &_scCompReg_mfbsLoad, 1},
    {"_scCompReg_corrTest", (DL_FUNC) &_scCompReg_corrTest, 2},
    {"_scCompReg_accumArrayMin", (DL_FUNC) &_scCompReg_accumArrayMin, 2},
    {"_scCompReg_compRegLoad", (DL_FUNC) &_scCompReg_compRegLoad, 1},
    {"_scCompReg_initializeMatrix", (DL_FUNC) &_scCompReg_initializeMatrix, 5},
    {"_scCompReg_computeLambda", (DL_FUNC) &_scCompReg_computeLambda, 10},
    {"_scCompReg_iterateCluster", (DL_FUNC) &_scCompReg_iterateCluster, 15},
    {"_scCompReg_cluster", (DL_FUNC) &_scCompReg_cluster, 2},
    {"_scCompReg_postLapMatMult", (DL_FUNC) &_scCompReg_postLapMatMult, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_scCompReg(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
