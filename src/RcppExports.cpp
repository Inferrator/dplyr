// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/dplyr.h"
#include "../inst/include/dplyr_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// loc
Rcpp::CharacterVector loc(SEXP data);
RcppExport SEXP _dplyr_loc(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(loc(data));
    return rcpp_result_gen;
END_RCPP
}
// dfloc
Rcpp::CharacterVector dfloc(Rcpp::List df);
RcppExport SEXP _dplyr_dfloc(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(dfloc(df));
    return rcpp_result_gen;
END_RCPP
}
// plfloc
Rcpp::CharacterVector plfloc(Rcpp::Pairlist data);
RcppExport SEXP _dplyr_plfloc(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::Pairlist >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(plfloc(data));
    return rcpp_result_gen;
END_RCPP
}
// strings_addresses
Rcpp::CharacterVector strings_addresses(Rcpp::CharacterVector s);
RcppExport SEXP _dplyr_strings_addresses(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(strings_addresses(s));
    return rcpp_result_gen;
END_RCPP
}
// init_logging
void init_logging(const std::string& log_level);
RcppExport SEXP _dplyr_init_logging(SEXP log_levelSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< const std::string& >::type log_level(log_levelSEXP);
    init_logging(log_level);
    return R_NilValue;
END_RCPP
}
// is_maybe_shared
bool is_maybe_shared(SEXP env, SEXP name);
RcppExport SEXP _dplyr_is_maybe_shared(SEXP envSEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type env(envSEXP);
    Rcpp::traits::input_parameter< SEXP >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(is_maybe_shared(env, name));
    return rcpp_result_gen;
END_RCPP
}
// maybe_shared_columns
Rcpp::LogicalVector maybe_shared_columns(SEXP df);
RcppExport SEXP _dplyr_maybe_shared_columns(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(maybe_shared_columns(df));
    return rcpp_result_gen;
END_RCPP
}
// arrange_impl
SEXP arrange_impl(Rcpp::DataFrame df, dplyr::QuosureList quosures, SEXP frame);
RcppExport SEXP _dplyr_arrange_impl(SEXP dfSEXP, SEXP quosuresSEXP, SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< dplyr::QuosureList >::type quosures(quosuresSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    rcpp_result_gen = Rcpp::wrap(arrange_impl(df, quosures, frame));
    return rcpp_result_gen;
END_RCPP
}
// between
Rcpp::LogicalVector between(Rcpp::NumericVector x, double left, double right);
RcppExport SEXP _dplyr_between(SEXP xSEXP, SEXP leftSEXP, SEXP rightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type left(leftSEXP);
    Rcpp::traits::input_parameter< double >::type right(rightSEXP);
    rcpp_result_gen = Rcpp::wrap(between(x, left, right));
    return rcpp_result_gen;
END_RCPP
}
// flatten_bindable
SEXP flatten_bindable(SEXP x);
RcppExport SEXP _dplyr_flatten_bindable(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(flatten_bindable(x));
    return rcpp_result_gen;
END_RCPP
}
// bind_rows_
Rcpp::List bind_rows_(Rcpp::List dots, SEXP id);
RcppExport SEXP _dplyr_bind_rows_(SEXP dotsSEXP, SEXP idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type dots(dotsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type id(idSEXP);
    rcpp_result_gen = Rcpp::wrap(bind_rows_(dots, id));
    return rcpp_result_gen;
END_RCPP
}
// cbind_all
SEXP cbind_all(Rcpp::List dots);
RcppExport SEXP _dplyr_cbind_all(SEXP dotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type dots(dotsSEXP);
    rcpp_result_gen = Rcpp::wrap(cbind_all(dots));
    return rcpp_result_gen;
END_RCPP
}
// combine_all
SEXP combine_all(Rcpp::List data);
RcppExport SEXP _dplyr_combine_all(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(combine_all(data));
    return rcpp_result_gen;
END_RCPP
}
// distinct_impl
SEXP distinct_impl(Rcpp::DataFrame df, const Rcpp::IntegerVector& vars, const Rcpp::IntegerVector& keep, SEXP frame);
RcppExport SEXP _dplyr_distinct_impl(SEXP dfSEXP, SEXP varsSEXP, SEXP keepSEXP, SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type vars(varsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type keep(keepSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    rcpp_result_gen = Rcpp::wrap(distinct_impl(df, vars, keep, frame));
    return rcpp_result_gen;
END_RCPP
}
// n_distinct_multi
int n_distinct_multi(Rcpp::List variables, bool na_rm);
RcppExport SEXP _dplyr_n_distinct_multi(SEXP variablesSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type variables(variablesSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    rcpp_result_gen = Rcpp::wrap(n_distinct_multi(variables, na_rm));
    return rcpp_result_gen;
END_RCPP
}
// filter_impl
SEXP filter_impl(Rcpp::DataFrame df, dplyr::Quosure quo);
RcppExport SEXP _dplyr_filter_impl(SEXP dfSEXP, SEXP quoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< dplyr::Quosure >::type quo(quoSEXP);
    rcpp_result_gen = Rcpp::wrap(filter_impl(df, quo));
    return rcpp_result_gen;
END_RCPP
}
// slice_impl
SEXP slice_impl(Rcpp::DataFrame df, dplyr::Quosure quosure);
RcppExport SEXP _dplyr_slice_impl(SEXP dfSEXP, SEXP quosureSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< dplyr::Quosure >::type quosure(quosureSEXP);
    rcpp_result_gen = Rcpp::wrap(slice_impl(df, quosure));
    return rcpp_result_gen;
END_RCPP
}
// grouped_indices_grouped_df_impl
Rcpp::IntegerVector grouped_indices_grouped_df_impl(const dplyr::GroupedDataFrame& gdf);
RcppExport SEXP _dplyr_grouped_indices_grouped_df_impl(SEXP gdfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const dplyr::GroupedDataFrame& >::type gdf(gdfSEXP);
    rcpp_result_gen = Rcpp::wrap(grouped_indices_grouped_df_impl(gdf));
    return rcpp_result_gen;
END_RCPP
}
// group_size_grouped_cpp
Rcpp::IntegerVector group_size_grouped_cpp(const dplyr::GroupedDataFrame& gdf);
RcppExport SEXP _dplyr_group_size_grouped_cpp(SEXP gdfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const dplyr::GroupedDataFrame& >::type gdf(gdfSEXP);
    rcpp_result_gen = Rcpp::wrap(group_size_grouped_cpp(gdf));
    return rcpp_result_gen;
END_RCPP
}
// regroup
SEXP regroup(Rcpp::DataFrame grouping_data, SEXP frame);
RcppExport SEXP _dplyr_regroup(SEXP grouping_dataSEXP, SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type grouping_data(grouping_dataSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    rcpp_result_gen = Rcpp::wrap(regroup(grouping_data, frame));
    return rcpp_result_gen;
END_RCPP
}
// grouped_df_impl
Rcpp::DataFrame grouped_df_impl(Rcpp::DataFrame data, const dplyr::SymbolVector& symbols, bool drop);
RcppExport SEXP _dplyr_grouped_df_impl(SEXP dataSEXP, SEXP symbolsSEXP, SEXP dropSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const dplyr::SymbolVector& >::type symbols(symbolsSEXP);
    Rcpp::traits::input_parameter< bool >::type drop(dropSEXP);
    rcpp_result_gen = Rcpp::wrap(grouped_df_impl(data, symbols, drop));
    return rcpp_result_gen;
END_RCPP
}
// group_data_grouped_df
Rcpp::DataFrame group_data_grouped_df(Rcpp::DataFrame data);
RcppExport SEXP _dplyr_group_data_grouped_df(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(group_data_grouped_df(data));
    return rcpp_result_gen;
END_RCPP
}
// ungroup_grouped_df
Rcpp::DataFrame ungroup_grouped_df(Rcpp::DataFrame df);
RcppExport SEXP _dplyr_ungroup_grouped_df(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(ungroup_grouped_df(df));
    return rcpp_result_gen;
END_RCPP
}
// group_split_impl
Rcpp::List group_split_impl(const dplyr::GroupedDataFrame& gdf, bool keep, SEXP frame);
RcppExport SEXP _dplyr_group_split_impl(SEXP gdfSEXP, SEXP keepSEXP, SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const dplyr::GroupedDataFrame& >::type gdf(gdfSEXP);
    Rcpp::traits::input_parameter< bool >::type keep(keepSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    rcpp_result_gen = Rcpp::wrap(group_split_impl(gdf, keep, frame));
    return rcpp_result_gen;
END_RCPP
}
// hybrids
Rcpp::List hybrids();
RcppExport SEXP _dplyr_hybrids() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    rcpp_result_gen = Rcpp::wrap(hybrids());
    return rcpp_result_gen;
END_RCPP
}
// semi_join_impl
Rcpp::DataFrame semi_join_impl(Rcpp::DataFrame x, Rcpp::DataFrame y, Rcpp::CharacterVector by_x, Rcpp::CharacterVector by_y, bool na_match, SEXP frame);
RcppExport SEXP _dplyr_semi_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP, SEXP na_matchSEXP, SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type by_y(by_ySEXP);
    Rcpp::traits::input_parameter< bool >::type na_match(na_matchSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    rcpp_result_gen = Rcpp::wrap(semi_join_impl(x, y, by_x, by_y, na_match, frame));
    return rcpp_result_gen;
END_RCPP
}
// anti_join_impl
Rcpp::DataFrame anti_join_impl(Rcpp::DataFrame x, Rcpp::DataFrame y, Rcpp::CharacterVector by_x, Rcpp::CharacterVector by_y, bool na_match, SEXP frame);
RcppExport SEXP _dplyr_anti_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP, SEXP na_matchSEXP, SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type by_y(by_ySEXP);
    Rcpp::traits::input_parameter< bool >::type na_match(na_matchSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    rcpp_result_gen = Rcpp::wrap(anti_join_impl(x, y, by_x, by_y, na_match, frame));
    return rcpp_result_gen;
END_RCPP
}
// inner_join_impl
Rcpp::DataFrame inner_join_impl(Rcpp::DataFrame x, Rcpp::DataFrame y, Rcpp::IntegerVector by_x, Rcpp::IntegerVector by_y, Rcpp::IntegerVector aux_x, Rcpp::IntegerVector aux_y, bool na_match, SEXP frame);
RcppExport SEXP _dplyr_inner_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP, SEXP aux_xSEXP, SEXP aux_ySEXP, SEXP na_matchSEXP, SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type by_y(by_ySEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type aux_x(aux_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type aux_y(aux_ySEXP);
    Rcpp::traits::input_parameter< bool >::type na_match(na_matchSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    rcpp_result_gen = Rcpp::wrap(inner_join_impl(x, y, by_x, by_y, aux_x, aux_y, na_match, frame));
    return rcpp_result_gen;
END_RCPP
}
// nest_join_impl
Rcpp::List nest_join_impl(Rcpp::DataFrame x, Rcpp::DataFrame y, Rcpp::IntegerVector by_x, Rcpp::IntegerVector by_y, Rcpp::IntegerVector aux_y, Rcpp::String yname, SEXP frame);
RcppExport SEXP _dplyr_nest_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP, SEXP aux_ySEXP, SEXP ynameSEXP, SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type by_y(by_ySEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type aux_y(aux_ySEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type yname(ynameSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    rcpp_result_gen = Rcpp::wrap(nest_join_impl(x, y, by_x, by_y, aux_y, yname, frame));
    return rcpp_result_gen;
END_RCPP
}
// left_join_impl
Rcpp::DataFrame left_join_impl(Rcpp::DataFrame x, Rcpp::DataFrame y, Rcpp::IntegerVector by_x, Rcpp::IntegerVector by_y, Rcpp::IntegerVector aux_x, Rcpp::IntegerVector aux_y, bool na_match, SEXP frame);
RcppExport SEXP _dplyr_left_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP, SEXP aux_xSEXP, SEXP aux_ySEXP, SEXP na_matchSEXP, SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type by_y(by_ySEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type aux_x(aux_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type aux_y(aux_ySEXP);
    Rcpp::traits::input_parameter< bool >::type na_match(na_matchSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    rcpp_result_gen = Rcpp::wrap(left_join_impl(x, y, by_x, by_y, aux_x, aux_y, na_match, frame));
    return rcpp_result_gen;
END_RCPP
}
// right_join_impl
Rcpp::DataFrame right_join_impl(Rcpp::DataFrame x, Rcpp::DataFrame y, Rcpp::IntegerVector by_x, Rcpp::IntegerVector by_y, Rcpp::IntegerVector aux_x, Rcpp::IntegerVector aux_y, bool na_match, SEXP frame);
RcppExport SEXP _dplyr_right_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP, SEXP aux_xSEXP, SEXP aux_ySEXP, SEXP na_matchSEXP, SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type by_y(by_ySEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type aux_x(aux_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type aux_y(aux_ySEXP);
    Rcpp::traits::input_parameter< bool >::type na_match(na_matchSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    rcpp_result_gen = Rcpp::wrap(right_join_impl(x, y, by_x, by_y, aux_x, aux_y, na_match, frame));
    return rcpp_result_gen;
END_RCPP
}
// full_join_impl
Rcpp::DataFrame full_join_impl(Rcpp::DataFrame x, Rcpp::DataFrame y, Rcpp::IntegerVector by_x, Rcpp::IntegerVector by_y, Rcpp::IntegerVector aux_x, Rcpp::IntegerVector aux_y, bool na_match, SEXP frame);
RcppExport SEXP _dplyr_full_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP, SEXP aux_xSEXP, SEXP aux_ySEXP, SEXP na_matchSEXP, SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type by_y(by_ySEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type aux_x(aux_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type aux_y(aux_ySEXP);
    Rcpp::traits::input_parameter< bool >::type na_match(na_matchSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    rcpp_result_gen = Rcpp::wrap(full_join_impl(x, y, by_x, by_y, aux_x, aux_y, na_match, frame));
    return rcpp_result_gen;
END_RCPP
}
// mutate_impl
SEXP mutate_impl(Rcpp::DataFrame df, dplyr::QuosureList dots, SEXP caller_env);
RcppExport SEXP _dplyr_mutate_impl(SEXP dfSEXP, SEXP dotsSEXP, SEXP caller_envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< dplyr::QuosureList >::type dots(dotsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type caller_env(caller_envSEXP);
    rcpp_result_gen = Rcpp::wrap(mutate_impl(df, dots, caller_env));
    return rcpp_result_gen;
END_RCPP
}
// select_impl
Rcpp::DataFrame select_impl(Rcpp::DataFrame df, Rcpp::CharacterVector vars);
RcppExport SEXP _dplyr_select_impl(SEXP dfSEXP, SEXP varsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type vars(varsSEXP);
    rcpp_result_gen = Rcpp::wrap(select_impl(df, vars));
    return rcpp_result_gen;
END_RCPP
}
// compatible_data_frame_nonames
dplyr::BoolResult compatible_data_frame_nonames(Rcpp::DataFrame x, Rcpp::DataFrame y, bool convert);
RcppExport SEXP _dplyr_compatible_data_frame_nonames(SEXP xSEXP, SEXP ySEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(compatible_data_frame_nonames(x, y, convert));
    return rcpp_result_gen;
END_RCPP
}
// compatible_data_frame
dplyr::BoolResult compatible_data_frame(Rcpp::DataFrame x, Rcpp::DataFrame y, bool ignore_col_order, bool convert);
RcppExport SEXP _dplyr_compatible_data_frame(SEXP xSEXP, SEXP ySEXP, SEXP ignore_col_orderSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type ignore_col_order(ignore_col_orderSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(compatible_data_frame(x, y, ignore_col_order, convert));
    return rcpp_result_gen;
END_RCPP
}
// equal_data_frame
dplyr::BoolResult equal_data_frame(Rcpp::DataFrame x, Rcpp::DataFrame y, bool ignore_col_order, bool ignore_row_order, bool convert);
RcppExport SEXP _dplyr_equal_data_frame(SEXP xSEXP, SEXP ySEXP, SEXP ignore_col_orderSEXP, SEXP ignore_row_orderSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type ignore_col_order(ignore_col_orderSEXP);
    Rcpp::traits::input_parameter< bool >::type ignore_row_order(ignore_row_orderSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(equal_data_frame(x, y, ignore_col_order, ignore_row_order, convert));
    return rcpp_result_gen;
END_RCPP
}
// union_data_frame
Rcpp::DataFrame union_data_frame(Rcpp::DataFrame x, Rcpp::DataFrame y);
RcppExport SEXP _dplyr_union_data_frame(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(union_data_frame(x, y));
    return rcpp_result_gen;
END_RCPP
}
// intersect_data_frame
Rcpp::DataFrame intersect_data_frame(Rcpp::DataFrame x, Rcpp::DataFrame y);
RcppExport SEXP _dplyr_intersect_data_frame(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(intersect_data_frame(x, y));
    return rcpp_result_gen;
END_RCPP
}
// setdiff_data_frame
Rcpp::DataFrame setdiff_data_frame(Rcpp::DataFrame x, Rcpp::DataFrame y);
RcppExport SEXP _dplyr_setdiff_data_frame(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(setdiff_data_frame(x, y));
    return rcpp_result_gen;
END_RCPP
}
// summarise_impl
SEXP summarise_impl(Rcpp::DataFrame df, dplyr::QuosureList dots, SEXP frame, SEXP caller_env);
RcppExport SEXP _dplyr_summarise_impl(SEXP dfSEXP, SEXP dotsSEXP, SEXP frameSEXP, SEXP caller_envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< dplyr::QuosureList >::type dots(dotsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type frame(frameSEXP);
    Rcpp::traits::input_parameter< SEXP >::type caller_env(caller_envSEXP);
    rcpp_result_gen = Rcpp::wrap(summarise_impl(df, dots, frame, caller_env));
    return rcpp_result_gen;
END_RCPP
}
// hybrid_impl
SEXP hybrid_impl(Rcpp::DataFrame df, dplyr::Quosure quosure, SEXP caller_env);
RcppExport SEXP _dplyr_hybrid_impl(SEXP dfSEXP, SEXP quosureSEXP, SEXP caller_envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< dplyr::Quosure >::type quosure(quosureSEXP);
    Rcpp::traits::input_parameter< SEXP >::type caller_env(caller_envSEXP);
    rcpp_result_gen = Rcpp::wrap(hybrid_impl(df, quosure, caller_env));
    return rcpp_result_gen;
END_RCPP
}
// test_comparisons
Rcpp::LogicalVector test_comparisons();
RcppExport SEXP _dplyr_test_comparisons() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    rcpp_result_gen = Rcpp::wrap(test_comparisons());
    return rcpp_result_gen;
END_RCPP
}
// test_matches
Rcpp::List test_matches();
RcppExport SEXP _dplyr_test_matches() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    rcpp_result_gen = Rcpp::wrap(test_matches());
    return rcpp_result_gen;
END_RCPP
}
// test_length_wrap
Rcpp::LogicalVector test_length_wrap();
RcppExport SEXP _dplyr_test_length_wrap() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    rcpp_result_gen = Rcpp::wrap(test_length_wrap());
    return rcpp_result_gen;
END_RCPP
}
// materialize_binding
SEXP materialize_binding(int idx, Rcpp::XPtr<dplyr::DataMaskWeakProxyBase> mask_proxy_xp);
RcppExport SEXP _dplyr_materialize_binding(SEXP idxSEXP, SEXP mask_proxy_xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type idx(idxSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<dplyr::DataMaskWeakProxyBase> >::type mask_proxy_xp(mask_proxy_xpSEXP);
    rcpp_result_gen = Rcpp::wrap(materialize_binding(idx, mask_proxy_xp));
    return rcpp_result_gen;
END_RCPP
}
// check_valid_names
void check_valid_names(const Rcpp::CharacterVector& names, bool warn_only);
RcppExport SEXP _dplyr_check_valid_names(SEXP namesSEXP, SEXP warn_onlySEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector& >::type names(namesSEXP);
    Rcpp::traits::input_parameter< bool >::type warn_only(warn_onlySEXP);
    check_valid_names(names, warn_only);
    return R_NilValue;
END_RCPP
}
// assert_all_allow_list
void assert_all_allow_list(const Rcpp::DataFrame& data);
RcppExport SEXP _dplyr_assert_all_allow_list(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type data(dataSEXP);
    assert_all_allow_list(data);
    return R_NilValue;
END_RCPP
}
// is_data_pronoun
bool is_data_pronoun(SEXP expr);
RcppExport SEXP _dplyr_is_data_pronoun(SEXP exprSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type expr(exprSEXP);
    rcpp_result_gen = Rcpp::wrap(is_data_pronoun(expr));
    return rcpp_result_gen;
END_RCPP
}
// is_variable_reference
bool is_variable_reference(SEXP expr);
RcppExport SEXP _dplyr_is_variable_reference(SEXP exprSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type expr(exprSEXP);
    rcpp_result_gen = Rcpp::wrap(is_variable_reference(expr));
    return rcpp_result_gen;
END_RCPP
}
// quo_is_variable_reference
bool quo_is_variable_reference(SEXP quo);
RcppExport SEXP _dplyr_quo_is_variable_reference(SEXP quoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type quo(quoSEXP);
    rcpp_result_gen = Rcpp::wrap(quo_is_variable_reference(quo));
    return rcpp_result_gen;
END_RCPP
}
// quo_is_data_pronoun
bool quo_is_data_pronoun(SEXP quo);
RcppExport SEXP _dplyr_quo_is_data_pronoun(SEXP quoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type quo(quoSEXP);
    rcpp_result_gen = Rcpp::wrap(quo_is_data_pronoun(quo));
    return rcpp_result_gen;
END_RCPP
}
// cumall
Rcpp::LogicalVector cumall(Rcpp::LogicalVector x);
RcppExport SEXP _dplyr_cumall(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cumall(x));
    return rcpp_result_gen;
END_RCPP
}
// cumany
Rcpp::LogicalVector cumany(Rcpp::LogicalVector x);
RcppExport SEXP _dplyr_cumany(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cumany(x));
    return rcpp_result_gen;
END_RCPP
}
// cummean
Rcpp::NumericVector cummean(Rcpp::NumericVector x);
RcppExport SEXP _dplyr_cummean(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cummean(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_dplyr_loc", (DL_FUNC) &_dplyr_loc, 1},
    {"_dplyr_dfloc", (DL_FUNC) &_dplyr_dfloc, 1},
    {"_dplyr_plfloc", (DL_FUNC) &_dplyr_plfloc, 1},
    {"_dplyr_strings_addresses", (DL_FUNC) &_dplyr_strings_addresses, 1},
    {"_dplyr_init_logging", (DL_FUNC) &_dplyr_init_logging, 1},
    {"_dplyr_is_maybe_shared", (DL_FUNC) &_dplyr_is_maybe_shared, 2},
    {"_dplyr_maybe_shared_columns", (DL_FUNC) &_dplyr_maybe_shared_columns, 1},
    {"_dplyr_arrange_impl", (DL_FUNC) &_dplyr_arrange_impl, 3},
    {"_dplyr_between", (DL_FUNC) &_dplyr_between, 3},
    {"_dplyr_flatten_bindable", (DL_FUNC) &_dplyr_flatten_bindable, 1},
    {"_dplyr_bind_rows_", (DL_FUNC) &_dplyr_bind_rows_, 2},
    {"_dplyr_cbind_all", (DL_FUNC) &_dplyr_cbind_all, 1},
    {"_dplyr_combine_all", (DL_FUNC) &_dplyr_combine_all, 1},
    {"_dplyr_distinct_impl", (DL_FUNC) &_dplyr_distinct_impl, 4},
    {"_dplyr_n_distinct_multi", (DL_FUNC) &_dplyr_n_distinct_multi, 2},
    {"_dplyr_filter_impl", (DL_FUNC) &_dplyr_filter_impl, 2},
    {"_dplyr_slice_impl", (DL_FUNC) &_dplyr_slice_impl, 2},
    {"_dplyr_grouped_indices_grouped_df_impl", (DL_FUNC) &_dplyr_grouped_indices_grouped_df_impl, 1},
    {"_dplyr_group_size_grouped_cpp", (DL_FUNC) &_dplyr_group_size_grouped_cpp, 1},
    {"_dplyr_regroup", (DL_FUNC) &_dplyr_regroup, 2},
    {"_dplyr_grouped_df_impl", (DL_FUNC) &_dplyr_grouped_df_impl, 3},
    {"_dplyr_group_data_grouped_df", (DL_FUNC) &_dplyr_group_data_grouped_df, 1},
    {"_dplyr_ungroup_grouped_df", (DL_FUNC) &_dplyr_ungroup_grouped_df, 1},
    {"_dplyr_group_split_impl", (DL_FUNC) &_dplyr_group_split_impl, 3},
    {"_dplyr_hybrids", (DL_FUNC) &_dplyr_hybrids, 0},
    {"_dplyr_semi_join_impl", (DL_FUNC) &_dplyr_semi_join_impl, 6},
    {"_dplyr_anti_join_impl", (DL_FUNC) &_dplyr_anti_join_impl, 6},
    {"_dplyr_inner_join_impl", (DL_FUNC) &_dplyr_inner_join_impl, 8},
    {"_dplyr_nest_join_impl", (DL_FUNC) &_dplyr_nest_join_impl, 7},
    {"_dplyr_left_join_impl", (DL_FUNC) &_dplyr_left_join_impl, 8},
    {"_dplyr_right_join_impl", (DL_FUNC) &_dplyr_right_join_impl, 8},
    {"_dplyr_full_join_impl", (DL_FUNC) &_dplyr_full_join_impl, 8},
    {"_dplyr_mutate_impl", (DL_FUNC) &_dplyr_mutate_impl, 3},
    {"_dplyr_select_impl", (DL_FUNC) &_dplyr_select_impl, 2},
    {"_dplyr_compatible_data_frame_nonames", (DL_FUNC) &_dplyr_compatible_data_frame_nonames, 3},
    {"_dplyr_compatible_data_frame", (DL_FUNC) &_dplyr_compatible_data_frame, 4},
    {"_dplyr_equal_data_frame", (DL_FUNC) &_dplyr_equal_data_frame, 5},
    {"_dplyr_union_data_frame", (DL_FUNC) &_dplyr_union_data_frame, 2},
    {"_dplyr_intersect_data_frame", (DL_FUNC) &_dplyr_intersect_data_frame, 2},
    {"_dplyr_setdiff_data_frame", (DL_FUNC) &_dplyr_setdiff_data_frame, 2},
    {"_dplyr_summarise_impl", (DL_FUNC) &_dplyr_summarise_impl, 4},
    {"_dplyr_hybrid_impl", (DL_FUNC) &_dplyr_hybrid_impl, 3},
    {"_dplyr_test_comparisons", (DL_FUNC) &_dplyr_test_comparisons, 0},
    {"_dplyr_test_matches", (DL_FUNC) &_dplyr_test_matches, 0},
    {"_dplyr_test_length_wrap", (DL_FUNC) &_dplyr_test_length_wrap, 0},
    {"_dplyr_materialize_binding", (DL_FUNC) &_dplyr_materialize_binding, 2},
    {"_dplyr_check_valid_names", (DL_FUNC) &_dplyr_check_valid_names, 2},
    {"_dplyr_assert_all_allow_list", (DL_FUNC) &_dplyr_assert_all_allow_list, 1},
    {"_dplyr_is_data_pronoun", (DL_FUNC) &_dplyr_is_data_pronoun, 1},
    {"_dplyr_is_variable_reference", (DL_FUNC) &_dplyr_is_variable_reference, 1},
    {"_dplyr_quo_is_variable_reference", (DL_FUNC) &_dplyr_quo_is_variable_reference, 1},
    {"_dplyr_quo_is_data_pronoun", (DL_FUNC) &_dplyr_quo_is_data_pronoun, 1},
    {"_dplyr_cumall", (DL_FUNC) &_dplyr_cumall, 1},
    {"_dplyr_cumany", (DL_FUNC) &_dplyr_cumany, 1},
    {"_dplyr_cummean", (DL_FUNC) &_dplyr_cummean, 1},
    {NULL, NULL, 0}
};

void init_hybrid_inline_map(DllInfo* /*dll*/);
RcppExport void R_init_dplyr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
    init_hybrid_inline_map(dll);
}
